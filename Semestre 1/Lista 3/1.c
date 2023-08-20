#include <stdio.h>

int main() {
    float num;
    for(int i =0 ; i<=5 ; i++){
        printf("Declare um numero:");
        scanf("%f",&num);

        printf("O dodro do %f = %f\n",num, num*2);
    }
    return 0;
}

