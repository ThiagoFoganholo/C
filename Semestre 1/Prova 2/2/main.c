#include <stdio.h>
#include <stdbool.h>

int main() {
    int op;
    bool t = true;
    char sair;

    do{
        printf("Digite 1 - para somar dois numero:\n"
               "Digite 2 - para subtrair dois numeros:\n"
               "Digite 3 - para sair: \n");
        scanf("%d",&op);

        switch (op) {
            int num1, num2,soma,subtracao;
            case 1:
                printf("Declare o premeiro numero:");
                scanf("%d",&num1);
                printf("Declare o segundo numero:");
                scanf("%d",&num2);
                printf("%d+%d = %d\n",num1,num2,num1+num2);
                break;
            case 2:
                printf("Declare o premeiro numero:");
                scanf("%d",&num1);
                printf("Declare o segundo numero:");
                scanf("%d",&num2);
                printf("%d-%d = %d\n",num1,num2,num1-num2);
                break;
            case 3:
                printf("Tem certeza que quer sair, se sim digite a tecla 'S' ou 's', caso nao digite qualquer tecla: ");
                scanf(" %c",&sair);

                if(sair == 'S' || sair == 's'){
                    printf("Fim do programa!");
                    t = false;
                    break;
                }else{
                    printf("continua no programa\n");
                }
                break;
            default:
                printf("Comando errado, digite novamente !\n");
        }

    }while(t == true);
    return 0;
}
