#include <stdio.h>

int main() {
    int num1,num2,num3;
    int maior , intermediario, menor;

   printf("Declare um valor num1:");
    scanf("%d",&num1);

    printf("Declare um valor num2:");
    scanf("%d",&num2);

    printf("Declare um valor num3:");
    scanf("%d", &num3);

    if(num1 != num2 || num2 != num1 || num2 != num3 || num3 != num2) {
        if (num1 >= num2 && num1 >= num3) {
            maior = num1;
            if (num2 >= num3) {
                intermediario = num2;
                menor = num3;
            } else {
                intermediario = num3;
                menor = num2;
            }
        } else if (num2 > num1 && num2 > num3) {
            maior = num2;
            if (num1 > num3) {
                intermediario = num1;
                menor = num3;
            } else {
                intermediario = num3;
                menor = num1;
            }
        } else if (num3 > num1 && num3 > num2){
            maior = num3;
            if(num1 > num2){
                intermediario = num1;
                menor = num2;
            }else{
                intermediario = num2;
                menor = num1;
            }
        }

        printf("Maior = %d\nIntermediario = %d\nMenor = %d",maior,intermediario,menor);

    }else{
        printf("num1 == num2 == num3 == %d ; %d ;%d",num1,num2,num3);
    }

    return 0;
}