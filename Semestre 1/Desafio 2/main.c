#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroAleatorio;
    int numeroChute ;
    int tentativas = 1 ;

    srand(time(NULL));
    numeroAleatorio = (rand() % 1000) + 1;

    do{
        printf("Chute um numero:");
        scanf(" %d",&numeroChute);
        if(numeroChute == numeroAleatorio){
            break;
        }
        if(numeroChute > numeroAleatorio){
            printf(" tentativa %d: Um numero  maior que 1 e menor que 1000 : O %d eh maior que o numero aleatorio\n",tentativas,numeroChute);
            tentativas++;
        }
        else if(numeroChute < numeroAleatorio){
            printf(" tentativa %d: Um numero  maior que 1 e menor que 1000 : O %d eh menor que o numero aleatorio\n",tentativas,numeroChute);
            tentativas++;
        }

    }while(1);

    tentativas = tentativas-1;

    if(tentativas >= 0 && tentativas <= 5){
        printf("Excelente, voce teve %d tentativa(s)",tentativas);
    }
    else if(tentativas >= 6 && tentativas <= 7){
        printf("Bom, voce teve %d tentativa(s)",tentativas);
    }
    else if(tentativas >= 8 && tentativas <= 12){
        printf("Normal, voce teve %d tentativa(s)",tentativas);
    }
    else if(tentativas >= 13 && tentativas <= 14){
        printf("Ruim, voce teve %d tentativa(s)",tentativas);
    }
    else if(tentativas >= 15 ){
        printf("Tragico, voce teve %d tentativa(s)",tentativas);
    }

    return 0;
}
