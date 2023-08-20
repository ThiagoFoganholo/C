#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro, se for par ele imprime o dobro, se impar o triplo:");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("numero par imprime o dobro\n");
        printf("%d x 2 = %d",num,num*2);
    }else{
        printf("numero impar imprime o triplo\n");
        printf("%d x 3 = %d",num,num*3);
    }

    return 0;
}
