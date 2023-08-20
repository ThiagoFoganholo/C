#include <stdio.h>

int main() {
    float gasto, acrescimoDoGarcom, totalDeGastos;
    acrescimoDoGarcom = 0.1;

    printf("Declare o valor gasto :");
    scanf(" %f",&gasto);

    totalDeGastos = gasto*11/10;

    printf("O gasto eh %.2f com acrescimo de 10%% do garcom fica R$%.2f ",gasto,totalDeGastos);

    return 0;
}
