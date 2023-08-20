#include <stdio.h>

int main() {
    float num;

    printf("Declare um numero qualquer:");
    scanf("%f",&num);

    if(num>0){
        printf("O numero %f eh positivo",num);
    }
    else if(num < 0){
        printf("O numero %f eh negativo",num);
    }
    else if(num == 0){
        printf("O numero %f eh nulo",num);
    }
    return 0;
}
