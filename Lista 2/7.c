#include <stdio.h>

int main() {
    int num1, num2;

    printf("declare um numero:");
    scanf("%d",&num1);

    printf("declare um numero:");
    scanf("%d",&num2);

    if(num1 == num2){
        printf("%d eh igual %d",num1,num2);
    }
    else{
        printf("%d eh diferente de %d",num1,num2);
    }
    printf("\n");
    //num1 = num1==num2 ? printf("%d eh igual %d",num1,num2) : printf("%d diferente %d",num1,num2);
    return 0;
}
