#include <stdio.h>
#include <locale.h>
#include <windows.h>

// #define NUMBER_OF_TRIES 3

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

    int secretNumber = 35;

    int takeAGuess;

    int won = 0;

    int tries = 0;    
    
    //for (size_t i = 0; i < NUMBER_OF_TRIES; i++) {
    while (won == 0) {
        //printf("Tentativa %d de %d\n", i, NUMBER_OF_TRIES);
        printf("Tentaviva %d\n", tries + 1);
        printf("Qual seu chute? ");
        scanf("%d", &takeAGuess);
        printf("Sua tentativa foi %d.\n", takeAGuess);

        if (takeAGuess < 0) {
            printf("Sua tentativa não foi validada.\n");
            printf("Não é possível inserir número negativo\n");
            //i--;
            continue;
        }

        if ( takeAGuess == secretNumber) {
            printf("Parabéns!\n");
            //break;
            won = 1;
        } else {
            if ( takeAGuess < secretNumber) {
                printf("Sua tentativa foi menor que o número secreto.\n");
            } else {
                printf("Seu tentativa foi maior que o número secreto.\n");
            }
            
        }
        tries++;
    }
    printf("Você acertou em %d tentativas\n", tries);
    printf("Fim de Jogo\n");
    
    // Define codificação como sendo default
    SetConsoleOutputCP(CPAGE_DEFAULT);
}