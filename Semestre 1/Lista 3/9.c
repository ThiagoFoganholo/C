#include <stdio.h>

int main() {
    float numero;

    do{
        printf("Digite um numero (-999 para sair): ");
        scanf("%f", &numero);

        if (numero == -999) {
            printf("FIM!");
            break;
        }

        printf("O triplo de %.3f eh %.3f\n", numero, numero * 3);
    }while (1);

    return 0;
}