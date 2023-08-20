#include <stdio.h>

int main() {
    float segundos, minutos, horas;

    printf("Declare um valor (em segundos) :");
    scanf("%f",&segundos);

    minutos = segundos / 60;
    horas = minutos / 60;

    printf(" Os segundos = %f(s) \n Os minutos em segundos= %f(mim) \n As Horas em segundos = %f(h)",segundos,minutos,horas);
    return 0;
}
