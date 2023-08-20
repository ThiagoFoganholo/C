#include <stdio.h>
#include <math.h>

int main() {
    float x1,x2,a,b,c,raizQuadrada,delta;

    printf("Declare a variavel A:");
    scanf("%f",&a);

    printf("Declare a variavel B:");
    scanf("%f",&b);

    printf("Declare a variavel C:");
    scanf("%f",&c);

    delta = (b*b)-(4*a*c);
    raizQuadrada = sqrt(delta);

    if(delta > 0){
        x1 = ((-b)+(raizQuadrada))/(2*a);
        x2 = ((-b)-(raizQuadrada))/(2*a);
        printf("x1 = %f\nx2 = %f",x1,x2);
    }
    else if(delta == 0){
        x1 = (-b)/(2*a);
        printf("x1 = %f",x1);
    }
    else if (delta < 0) {
        printf("Nao existe sulucao no conjunto dos reais");
    }
    return 0;
}
