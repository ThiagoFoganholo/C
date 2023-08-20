#include <stdio.h>

int main() {
    float PI = 3.141592;
    float raio, altura, volumeDoCilindro ;

    printf("Declare o raio do cilindro : ");
    scanf("%f",&raio);

    printf("Declare a altura do cilindro: ");
    scanf("%f",&altura);

    volumeDoCilindro = PI*raio*raio*altura;

    printf("O volume do cilindro = %f",volumeDoCilindro);
    return 0;
}
