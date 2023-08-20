#include <stdio.h>

typedef struct flaot flaot;

int main() {
    //Calcula perimetro
    const float PI = 3.141592;
    float raio, perimetro, area;

    printf("\ndeclare o valor do raio :");
    scanf(" %f", &raio);

    perimetro  = 2 * PI * raio;
    area = PI * raio * raio;

    printf("\n O raio : %f \n A area do circulo : %f \n o perimetro : %f\n",raio,area,perimetro);

    return 0;
}
