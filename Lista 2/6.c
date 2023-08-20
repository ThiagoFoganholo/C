#include <stdio.h>

int main() {
    float num;

    printf("Declare um numero:");
    scanf("%f",&num);

    if(num == 20){
        printf("O numero eh igual a 20");
    }
    if(num != 20){
        if(num<20){
            printf("O numero (%.4f) eh menor que 20",num);
        }
        if(num>20){
            printf("O numero (%.4f) eh menor que 20",num);
        }
    }
    return 0;
}
