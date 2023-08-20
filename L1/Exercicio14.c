#include <stdio.h>

int main() {
    int quantidadeDeAulasDadas;
    float valorHoraAula ,descontoINSS;
    float salarioLiquido;

    printf("Declare a quantidade de aulas dadas pelo professor: ");
    scanf("%d",&quantidadeDeAulasDadas);

    printf("Declare o valor da hora aula (em reais): ");
    scanf("%f",&valorHoraAula);

    printf("Declare o valor do desconto do INSS (em decimal) :");
    scanf("%f", &descontoINSS);

    salarioLiquido = (quantidadeDeAulasDadas * valorHoraAula) - descontoINSS ;

    printf("O salario liquido do professor: R$ %.2f",salarioLiquido);

    return 0;
}
