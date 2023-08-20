#include <stdio.h>

int main() {
    float prestacao, valor, taxa , tempo;

    printf("Declare o valor atrasado: ");
    scanf("%f",&valor);

    printf("Declare o juros (em decimal) :");
    scanf("%f",&taxa);

    printf("Declare o tempo (em anos) :");
    scanf("%f",&tempo);

    prestacao = valor + (valor+(taxa/100)*tempo);

    printf("O valor da prestacao atrasada eh : R$ %f ",prestacao);

    return 0;
}
