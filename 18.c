#include <stdio.h>

int main() {

    int pontosJogador1,pontosJogador2,pontosJogador3, primeiroLugar , segundolugar, terceiroLugar;
    int auxJogador1=0,auxJogador2=0,auxjogador3=0;
    float somaPontos = 0.0;
    float mediaPontos = 0.0;

    char string1[] = "Player1";
    char string2[] = "PLayer2";
    char string3[] = "Player3";

    printf("\n");

    printf("informe a quantidade de pontos do %s:",string1);
    scanf(" %d",&pontosJogador1);

    printf("\n");

    printf("informe a quantidade de pontos do %s:",string2);
    scanf(" %d",&pontosJogador2);

    printf("\n");

    printf("informe a quantidade de pontos do %s:",string3);
    scanf(" %d",&pontosJogador3);

    if( pontosJogador1 > pontosJogador2){
        if(pontosJogador1 > pontosJogador3){
             primeiroLugar = pontosJogador1 ;
             auxJogador1 = 1;
        }if(pontosJogador2 > pontosJogador3){
            segundolugar = pontosJogador2;
            auxJogador2 = 2;
            terceiroLugar = pontosJogador3;
            auxjogador3 = 3;
        }else{
            segundolugar = pontosJogador3;
            auxjogador3 = 2;
            terceiroLugar = pontosJogador2;
            auxJogador2 = 3;
        }
    }
    else if(pontosJogador2 > pontosJogador3){
        if(pontosJogador2 > pontosJogador1){
            primeiroLugar = pontosJogador2;
            auxJogador2 = 1;
        }
        if( pontosJogador3 > pontosJogador1){
            segundolugar = pontosJogador3;
            auxjogador3 = 2;
            terceiroLugar = pontosJogador1;
            auxJogador1 = 3;
        }else{
            segundolugar = pontosJogador1;
            auxJogador1 = 2;
            terceiroLugar = pontosJogador3;
            auxjogador3 = 3;
        }
    }
    else if (pontosJogador3 > pontosJogador1){
        if(pontosJogador3 > pontosJogador2){
            primeiroLugar = pontosJogador3;
            auxjogador3 = 1;
        }
        if( pontosJogador2 > pontosJogador1){
            segundolugar = pontosJogador2;
            auxJogador2 = 2;
            terceiroLugar = pontosJogador1;
            auxJogador1 = 3;
        }else{
            segundolugar = pontosJogador1;
            auxJogador1 = 2;
            terceiroLugar = pontosJogador2;
            auxJogador2 = 3;
        }
    }

    if(auxJogador1 == 1 && auxJogador2 == 2 && auxjogador3 == 3){
        printf("\n Jogador %s = pontos %d \n Jogador %s = pontos %d \n Jogador %s = pontos %d\n",string1,pontosJogador1,string2,pontosJogador2,string3,pontosJogador3);
    }
    else if(auxJogador1 == 1 && auxjogador3 == 2 && auxJogador2 == 3){
        printf("\n Jogador %s = pontos %d \n Jogador %s = pontos %d \n Jogador %s = pontos %d\n",string1,pontosJogador1,string3,pontosJogador3,string2,pontosJogador2);
    }
    else if(auxJogador2 == 1 && auxJogador1 == 2 && auxjogador3 == 3){
        printf("\n Jogador %s = pontos %d \n Jogador %s = pontos %d \n Jogador %s = pontos %d\n",string2,pontosJogador2,string1,pontosJogador1,string3,pontosJogador3);
    }
    else if(auxJogador2 == 1 && auxjogador3 == 2 && auxJogador1 == 3){
        printf("\n Jogador %s = pontos %d \n Jogador %s = pontos %d \n Jogador %s = pontos %d\n",string2,pontosJogador2,string3,pontosJogador3,string1,pontosJogador1);
    }
    else if(auxjogador3 == 1 && auxJogador1 == 2 && auxJogador2 == 3){
        printf("\n Jogador %s = pontos %d \n Jogador %s = pontos %d \n Jogador %s = pontos %d\n",string3,pontosJogador3,string1,pontosJogador1,string2,pontosJogador2);
    }
    else if(auxjogador3 == 1 && auxJogador2 == 2 && auxJogador1 == 3){
        printf("\n Jogador %s = pontos %d \n Jogador %s = pontos %d \n Jogador %s = pontos %d\n",string3,pontosJogador3,string2,pontosJogador2,string1,pontosJogador1);
    }
    else{

    }
    somaPontos = (pontosJogador1+pontosJogador2+pontosJogador3);
    mediaPontos = (somaPontos)/(3);

    if(somaPontos > 100) {
        printf("\nA media de todos os pontos eh %f", mediaPontos);
    }else{
        printf("Desclassificados");
    }
    return 0;
}
