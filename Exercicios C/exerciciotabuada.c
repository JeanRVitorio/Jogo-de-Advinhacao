#include <stdio.h>

int main() {

    printf("**************************************\n");
    printf("****** Calculadora de Tabuadas *******\n");
    printf("**************************************\n");

    int number;
    printf("Tabuada do: ");
    scanf("%d", &number);

    for (int i = 1; i < 11; i++) {
        int multiplication = number * i;
        printf("%d x %d = %d\n", number, i, multiplication);
    }  

}