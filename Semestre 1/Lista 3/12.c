#include <stdio.h>
#include <math.h>
#include <stdbool.h>

//int main() {
//    bool t = true;
//    float num;
//    do{
//        printf("Digite um numero positivo para fazer raiz quadrada (Digite -999 para sair):");
//        scanf("%f",&num);
//        if( num == -999){
//            printf("Fim");
//            t = false;
//            break;
//        }
//        if(num < 0){
//            printf(" numero invalido, digite novamente !\n");
//        }
//        else if (num != -999 && num >= 0){
//            printf("A raiz quadrada de %f = %f\n",num, sqrt(num));
//        }
//        printf("\n");
//    } while (t == true);
//
//    return 0;
//}

#include <stdio.h>
#include <math.h>

int main() {
    float num;
    do{
        printf("Digite um numero positivo para fazer raiz quadrada:");
        scanf("%f",&num);
        if(num < 0){
            printf(" numero invalido, digite novamente !\n");
        }
        else if (num >= 0){
            printf("A raiz quadrada de %f = %f\n",num, sqrt(num));
        }
        printf("\n");
    } while (1);

    return 0;
}


