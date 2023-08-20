#include <stdio.h>

int main() {
    int idade;
    float peso;
    float gotas,mg;

    printf("Declare a idade:");
    scanf("%d",&idade);

    printf("Declare o peso em kg:");
    scanf("%f",&peso);

    if(idade >= 12 ){
        if(peso >= 60) {
            mg = 1000;
            gotas = mg / 25;

            printf("A quantidade de gotas eh %.2f por ml", gotas);
        }
        else if(peso < 60){
            mg = 875;
            gotas = mg / 25;


            printf("A quantidade de gotas eh %.2f por ml", gotas);
        }
    }else{
        if(peso >= 5 && peso <= 9){
            mg = 125;
            gotas = mg/25;

            printf("A quantidade de gotas eh %.2f por ml", gotas);
        }
        else if(peso >= 9.1 && peso <= 16) {
            mg = 250;
            gotas = mg/25;

            printf("A quantidade de gotas eh %.2f por ml", gotas);
        }
        else if(peso >= 16.1 && peso <= 24) {
            mg = 375;
            gotas = mg/25;

            printf("A quantidade de gotas eh %.2f por ml", gotas);
        }
        else if(peso >= 24.1 && peso <= 30) {
            mg = 500;
            gotas = mg/25;

            printf("A quantidade de gotas eh %.2f por ml", gotas);
        }
        else if(peso > 30) {
            mg = 750;
            gotas = mg/25;

            printf("A quantidade de gotas eh %.2f por ml", gotas);
        }
    }
    return 0;
}
