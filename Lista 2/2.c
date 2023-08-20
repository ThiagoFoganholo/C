#include <stdio.h>

int main() {
    float num;

    printf("Declare um numero: ");
    scanf("%f",&num);

    if(num == 0){
        printf("O numero eh nulo!!");
    }
    if(num<0){
        printf("O numero eh negativo");
    }
    if(num>0){
        printf("numero eh postivo");
    }
    return 0;
}
