#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //Casting
    int a = 3;
    int b = 2;
    double point = a / (double)b;
    printf("%f\n", point);

    double pi = 3.1415;
    int piInt = (int)pi;
    printf("%f\n %d\n", pi, piInt);

    //ads
    int c = 3;
    int d = -3;

    int f = abs(c * d);
    printf("%d\n %d\n", c, d);
    printf("%d\n", f);
    
    //rand e EPOCH
    int segundos = time(0);
    srand(segundos);

    int n1 = rand();
    int n2 = rand();
    printf("%d\n %d\n", n1, n2);
}