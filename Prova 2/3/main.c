#include <stdio.h>
#include <math.h>

int main() {
    int num;

    do{
        printf("Digite um numero positivo par para fazer a raiz quadrada:");
        scanf(" %d", &num);

        if(num>=0 && num % 2 == 0){
            printf("A raiz quadrada do %d = %f\n\n",num,sqrt(num));
        }else{
            printf("numero negativo ou impar, digite novamente\n");
        }
    }while(1);
    return 0;
}
