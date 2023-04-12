#include <stdio.h>
#include <locale.h>
#include <windows.h>

//Contador até 100 com "for"
int main() {

    // Define o valor das páginas de código UTF8 e default do Windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    // Define codificação como sendo UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);
    //-------------------------------------------------------------

    for(int i = 1; i <= 100; i++) {
        printf("%d \n", i);
        printf("------------------------------\n");
    }

//Contador até 100 com "while"
    int number = 1;

    while (number <= 100) {
        printf("%d\n", number);
        printf("------------------------------\n");
        number++;
    }
//Soma 
    int soma = 0;
    for(int i = 1; i <= 100; i++) {
        soma = soma + i;
    }

    printf("A soma é %d\n", soma);
    printf("------------------------------\n");

    // Define codificação como sendo default
    SetConsoleOutputCP(CPAGE_DEFAULT);
}
