#include <stdio.h>

int main() {
    int num;

    printf("Declare um numero:");
    scanf("%d",&num);
    if(num != 0){
        if(num%3 == 0){
            printf("numero eh divisivel por 3");
        }
        else{
            printf("numero nao eh divisivel por 3");
        }
    }else{
        printf("O numero nao eh divisivel por 3");
    }

    return 0;
}
