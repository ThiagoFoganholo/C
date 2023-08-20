#include <stdio.h>

int main() {
    float precoDoProduto, descontoDoProduto, produtoComODesconto;

    printf("Declare o preco do produto : ");
    scanf(" %f", &precoDoProduto);

    printf("Declare o desconto do produto : ");
    scanf(" %f", &descontoDoProduto);

    produtoComODesconto = precoDoProduto - (precoDoProduto * (descontoDoProduto/100)); //(precoDoProduto * 9)/10;

    printf("O desconto do produto %.2f%% \n O seu preco normal R$ %.2f \n O preco com o desconto R$ %.2f",descontoDoProduto,precoDoProduto,produtoComODesconto) ;
    return 0;
}
