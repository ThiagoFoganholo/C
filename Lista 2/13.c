#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    int maior, menor;

    printf("Declare um valor:");
    scanf(" %d",&num1);

    printf("Declare um valor:");
    scanf(" %d",&num2);

    printf("Declare um valor:");
    scanf(" %d",&num3);

    printf("Declare um valor:");
    scanf(" %d",&num4);

    printf("Declare um valor:");
    scanf(" %d",&num5);

    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5) {
        maior = num1;
    } else if (num2 > num3 && num2 > num4 && num2 > num5) {
        maior = num2;
    } else if (num3 > num4 && num3 > num5) {
        maior = num3;
    } else if (num4 > num5) {
        maior = num4;
    } else {
        maior = num5;
    }

    if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5) {
        menor = num1;
    } else if (num2 < num3 && num2 < num4 && num2 < num5) {
        menor = num2;
    } else if (num3 < num4 && num3 < num5) {
        menor = num3;
    } else if (num4 < num5) {
        menor = num4;
    } else {
        menor = num5;
    }

    printf("O maior numero eh: %d\n", maior);
    printf("O menor numero eh: %d\n", menor);

    return 0;
}