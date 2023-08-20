#include <stdio.h>

int main() {
    int count =0 ;
    float lado1, lado2, lado3;

    printf("Declare o lado1 do triangulo:");
    scanf("%f",&lado1);

    printf("Declare o lado2 do triangulo:");
    scanf("%f",&lado2);

    printf("Declare o lado3 do triangulo:");
    scanf("%f",&lado3);

    if(lado1+lado2 > lado3){
        count++;
    }
    if(lado1+lado3 > lado2){
        count++;
    }
    if(lado2+lado3 > lado1){
        count++;
    }
    if(count == 3){
        printf("lado1 = %f; lado2 = %f; lado3 = %f sao validos para um triangulo",lado1,lado2,lado3);
    }else{
        printf("lado1 = %f; lado2 = %f; lado3 = %f nao sao validos para um triangulo",lado1,lado2,lado3);
    }
    return 0;
}
