#include <stdio.h>

int main() {
    int inicial;
    int final;
    int soma = 0 ;
    float media;
    int cont = 0 ;

    printf("Declare o valor inicial de uma contagem:");
    scanf("%d",&inicial);

    printf("Declare o valor final de um contagem:");
    scanf("%d",&final);

    for(int i = inicial;i<= final;i++){

        soma = soma + inicial;
        inicial = i + 1;
        cont++;

    }

    media = ((float)soma / (float)cont);

    printf("a soma dos numeros = %d\n",soma);
    printf("a media dos numeros = %f\n",media);


    return 0;
}
