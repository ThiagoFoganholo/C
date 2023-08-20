#include <stdio.h>

int main() {
    float distancia , velocidade, litros;
    int tempo;
    printf("Declare o tempo gasto na viagem (em horas): ");
    scanf("%d", &tempo);

    printf("Declare a velocidade media da viagem (em km): ");
    scanf("%f", &velocidade);

    distancia = (tempo * velocidade);
    litros = (distancia)/12;

    printf("A quantidade de litros gas na viagem eh : %.3f L",litros);
    return 0;
}
