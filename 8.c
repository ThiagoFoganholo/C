#include <stdio.h>

int main() {
    int num1,num2;

    printf("declare um valor:");
    scanf(" %d",&num1);
    printf("declare um valor:");
    scanf(" %d",&num2);

    if(num1==num2){
        printf("sao iguais");
    }else{
        if(num1 > num2){
            printf("num1 = %d eh maior ", num1);
        }else{
            printf("num2 = %d eh maior",num2,num1);
        }
    }

    return 0;
}
