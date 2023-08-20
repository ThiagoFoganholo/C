#include <stdio.h>

int main() {
    int num;
    int count = 0 ;

    do{
        printf("Digite um numero qualquer (0 para finalizar): ");
        scanf(" %d",&num);
        if(num>=100 && num <=200){
            count++;
        }
    }while(num);

    printf("\nQuantidade de numeros digitados entre 100 a 200 eh %d",count);

    return 0;
}
