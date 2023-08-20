#include <stdio.h>

int main() {
    float salarioBruto;
    float valorPrestacao;
    float limitePrestacao;

    printf("Declare o seu salario Bruto:");
    scanf("%f",&salarioBruto);

    printf("Declare o seu valor da prestacao:");
    scanf("%f",&valorPrestacao);

    limitePrestacao = (salarioBruto*30)/100;

    if(valorPrestacao > limitePrestacao){
        printf("Emprestimo nao aprovado, o valor da prestacao R$%.2f ultrapassa 30%% do salario bruto R$%.2f.\n", valorPrestacao,salarioBruto);
    }else{
        printf("Limete de aprovado");
    }
    return 0;
}
