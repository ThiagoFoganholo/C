#include <stdio.h>

int main() {
    float numerador, denominador;
    float valorDecimal;

    printf("Digite o numerador: ");
    scanf(" %f", &numerador);

    printf("Digite o denominador: ");
    scanf(" %f", &denominador);

    valorDecimal = (float)(numerador/denominador);

    printf("O valor decimal da fracao %f / %f = %f \n",numerador,denominador,valorDecimal);

    return 0;
}
