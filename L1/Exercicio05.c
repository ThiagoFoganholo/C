#include <stdio.h>

int main() {
    float n1, antecessor, sucessor;

    printf("Declare um valor qualquer para N1 : ");
    scanf(" %f", &n1);

    antecessor = n1 - 1;
    sucessor = n1 + 1;

    printf("O numero declarado: %f\n seu sucessor: %f \n seu antecessor: %f",n1,sucessor,antecessor);

    return 0;
}
