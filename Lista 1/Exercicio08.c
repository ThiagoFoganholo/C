#include <stdio.h>

int main() {
    float n1,n2,mediaAritmetica;

    printf("Declare o valor para N1: ");
    scanf(" %f",&n1);

    printf("Declare o valor para N2: ");
    scanf(" %f",&n2);

    mediaAritmetica = ((n1+n2)/2);

    printf("N1 = %f , N2 = %f, ((N1+N2)/2) = %f",n1,n2,mediaAritmetica);

    return 0;
}
