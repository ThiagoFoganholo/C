#include <stdio.h>

int main() {
    float num;

    printf("Declare um numero qualquer: ");
    scanf("%f",&num);

    if(num == 20){
        printf("O numero %f eh igual ao 20",num);
    }
    else if(num > 20){
        printf(" O numero %f eh maior que 20",num);
    }

    else{
        printf("O numero %f menor que 20 !!",num);
    }
    return 0;
}
