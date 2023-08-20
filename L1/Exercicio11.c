#include <stdio.h>

int main() {
    float salarioMinimo;
    float quantidadeDeQuilowattsGasta, valorDoKiloWatt, valorASerPagoDaEnergia, valorASerPagoCom10_desconto;

    printf("Declare o valor do salario minimo :");
    scanf(" %f", &salarioMinimo);

    printf("Declare o valor gastos de energia (em kW) :");
    scanf(" %f", &quantidadeDeQuilowattsGasta);

    valorDoKiloWatt = salarioMinimo/700;

    printf("\n O valor do kiloWatts eh = %f Kw",valorDoKiloWatt);

    valorASerPagoDaEnergia = (quantidadeDeQuilowattsGasta * salarioMinimo)/700;

    printf("\n O valor a ser pago em reais eh : R$ %.2f",valorASerPagoDaEnergia);

    valorASerPagoCom10_desconto = ( quantidadeDeQuilowattsGasta * salarioMinimo * 9 ) / 7000 ;

    printf("\n O valor a ser pago em reais com 10%% de desconto eh : R$ %.2f",valorASerPagoCom10_desconto);

    return 0;
}