#include <stdio.h>

int main() {
    float saldo, saldoCom3_5mais;
    printf("Declare o valor do saldo : ");
    scanf("%f", &saldo);

    saldoCom3_5mais = (saldo*103.5)/100;

    printf("O novo saldo de R$ %.2f para um rendimento de 3,5%% a mais eh de : %.2f",saldo,saldoCom3_5mais);
    return 0;
}
