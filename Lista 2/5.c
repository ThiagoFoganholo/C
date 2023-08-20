#include <stdio.h>

int main() {
    float num;
    int centena;

    printf ("Declare um numero de 3 digitos: ");
    scanf("%f",&num);

    if(num>=100 && num <=999){
        centena = num/100;

        if(centena % 2 == 0){
            printf("A centena eh par (%d)",centena);
        }else{
            printf("A centena nao eh par (%d)",centena);
        }
    }
    else{
        printf("numero fora do escopo");
    }

    return 0;
}
