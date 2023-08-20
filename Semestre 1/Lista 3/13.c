#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    bool t = true;
    int num ;
    do{
        long long acumula = 0;
        long long fat = 1;

        printf("\nDigite um numero para fazer o fatorial ate ele (digite um numero negativo para sair):");
        scanf("%d",&num);

        if(num>0){
            for (int i = 0; i < num ; i++){
                acumula = i + 1;
                fat = fat*acumula;
            }
        }else{
            printf("Fim");
            t = false;
            break;
        }
        printf("\nO fatoride de %d! = %d\n",num,fat);
    } while (t);

    return 0;
}
