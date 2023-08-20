#include <stdio.h>

int main() {
    float A, B, C;

    printf("Declare o valor de A :");
    scanf("%f",&A);

    printf("Declare o valor de B :");
    scanf("%f",&B);

    printf("O valor de A = %f e de B = %f ",A,B);

    C = A;
    A = B;
    B = C;

    printf("\nO valor de A = %f e de B = %f ",A,B);
    return 0;
}
