#include <stdio.h>

int main() {

    float num;
    int count = 0;
    int contador =0;
    float soma = 0;
    float media = 0;
    float maior, menor;

    while (1) {

        printf("Digite um numero qualquer(0 para finalizar): ");
        scanf(" %f", &num);

        if (num) {

            soma = soma + num;
            count++;
            if (num >= maior) {
                maior = num;
            }
            if (num <= menor) {
                menor = num;
            }
        } else {
            printf("\n");
            media = soma / count;
            printf(" A soma dos numeros digitados = %f\n", soma);
            printf(" A media dos numeros digitados = %f\n", media);
            printf(" Quantidade de numeros digitados = %d\n", count);
            printf(" O maior numero eh %f\n", maior);
            printf(" O menor numero eh %f\n", menor);
            printf(" Fim");
            break;
        }
    }
    return 0;
}