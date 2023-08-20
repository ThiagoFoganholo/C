#include <stdio.h>

int main() {

    float num1, num2;
    int opcao;

    printf("Digite um numero qualquer:");
    scanf(" %f",&num1);

    printf("Digite um numero qualquer:");
    scanf(" %f",&num2);

        printf(" \n Digite 1 - para imprimir os numeros em ordem crescente\n"
               " Digite 2 - para imprimir os numeros em ordem decrescente\n");

        scanf(" %d", &opcao);

        switch (opcao) {
            case 1 :
                if (num1 < num2) {
                    printf("%f , %f ", num1, num2);
                } else {
                    printf("%f , %f ", num2, num1);
                }
                break;
            case 2:
                if (num1 > num2) {
                    printf("%f , %f ", num1, num2);
                } else {
                    printf("%f , %f ", num2, num1);
                }
                break;
            case 0:
                printf("Fim");
                break;
            default:
                printf("Comando errado!");
                //break;
        }

    return 0;
}
