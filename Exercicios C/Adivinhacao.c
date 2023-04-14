#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <windows.h>

int main() {

    // Define o valor das páginas de código UTF8 e default do Windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    // Define codificação como sendo UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);
    //-------------------------------------------------------------

    printf("*****************************************\n");
    printf("**** Bem Vindo ao Jogo de Advinhação ****\n");
    printf("*****************************************\n");


printf("                 _           _           _                       /\/|          \n");
printf("     /\\         | |         (_)         | |                     |/\/           \n");
printf("    /  \\      __| | __   __  _   _ __   | |__     __ _    ___    __ _    ___   \n");
printf("   / /\\ \\    / _` | \\ \\ / / | | | '_ \  | '_ \\   / _` |  / __|  / _` |  / _ \\  \n");
printf("  / ____ \\  | ((_| |  \\ V /  | | | | | | | | | | | (_| | | (__  | (_| | | (_) | \n");
printf(" /_/    \\_\\  \\__,_|   \\_/   |_| |_| |_| |_| |_|  \\__,_|  \\___|  \\__,_|  \\___/  \n");
printf("                                                          )_)                  \n");

    //Gera número aleatório.
    int seconds = time(0);
    srand(seconds);
    int numberRand = rand();
    int secretNumber = numberRand % 100;
    //--------------------
    int takeAGuess; //Chute
    int tries = 1; //Tentativas
    int hit = 0; //Acerto
    double points = 1000; //Pontuação Inicial
    
    int nivel;
    printf("Escolha o nível de difilculdade\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n");
    printf("Insira o nível: ");
    scanf("%d", &nivel);

    int numberoftries; //Número de tentativas
    
    switch(nivel) {
        case 1:
            numberoftries = 20;
            break;
        case 2:
            numberoftries = 15;
            break;
        default:
            numberoftries = 7;
            break;
    }

    int i;
    for (i = 1; i <= numberoftries; i++) {
    
        printf("Tentativa %d de %d\n", i, numberoftries);
        printf("Tentaviva %d\n", tries);
        printf("Qual seu chute? ");
        scanf("%d", &takeAGuess);
        printf("Sua tentativa foi %d.\n", takeAGuess);

        if (takeAGuess < 0) {
            printf("Sua tentativa não foi validada.\n");
            printf("Não é possível inserir número negativo\n");
        }

        hit = (takeAGuess == secretNumber);
        int bigger = (takeAGuess < secretNumber);

        if ( hit ) {
            break;
        } else {
            if ( bigger ) {
                printf("Sua tentativa foi menor que o número secreto.\n");
            } else {
                printf("Seu tentativa foi maior que o número secreto.\n");
            }
            
        }
        tries++;

        double lostPoints = abs(takeAGuess - secretNumber) / (double)2;
        if (lostPoints < 0) {
        }
        points = points - lostPoints;
    }

    printf("Fim de Jogo\n");

    if ( hit ) {
        printf("Parabéns!\n");
        printf("Seus pontos foram: %.1f\n", points);
        printf("Você acertou em %d tentativas\n", tries);   
    } else {
        printf("Você perdeu. Tente Novamente.\n");
    } 


    // Define codificação como sendo default
    SetConsoleOutputCP(CPAGE_DEFAULT);
}
