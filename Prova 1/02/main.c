#include <stdio.h>

int main() {
    float num1,num2;

    printf("Digite um numero qualquer:");
    scanf("%f",&num1);
    printf("Digite um numero qualquer:");
    scanf("%f",&num2);

    if(num1 > num2){
        printf("O maior numero eh o %f\n",num1);
        printf("%f / 2 = %f\n",num1,num1/2);
    }else{
        printf("O maior numero eh o %f\n",num2);
        printf("%f / 2 = %f\n",num2,num2/2);
    }
    return 0;
}
