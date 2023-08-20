#include <stdio.h>

int main() {
    int num;
    int sub = 0;
    do {
        printf("Digite um numero para subtrair ele ate zero:");
        scanf("%d",&num);
        if(num >=0){
            for(int i = num; i >= 0;i--){
                printf("%d\n",i);
            }
        }else{
            printf("Numero negativo, digite novamente!!!\n");
        }

    }while (1);

    return 0;
}
