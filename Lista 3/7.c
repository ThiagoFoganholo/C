#include <stdio.h>

int main() {
    int num;
    int aux =0;
    int maior;
    int menor;

    printf("\nDigite 10 numero para verificar qual eh o maior e o menor\n");

    for(int i = 1 ; i <= 10 ; i++){

        printf("%d) Digite um numero :",i);
        scanf("%d",&num);

        if(aux == 0) {
            maior = num;
            menor = num;
            aux++;
        }

        if(num >= maior){
            maior = num;
        }
        else if(num <= menor){
            menor = num;
        }
    }

    printf("O maior numero eh %d\n",maior);
    printf("O menor numero eh %d\n",menor);

    return 0;
}
