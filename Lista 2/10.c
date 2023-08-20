#include <stdio.h>

int main() {
    int num1,num2,num3;

    printf("declare o num1:");
    scanf("%d",&num1);
    printf("declare o num2:");
    scanf("%d",&num2);
    printf("declare o num3:");
    scanf("%d",&num3);

    if(num1 > num3 && num1 > num2){
        printf("O maior eh o num1 = %d\n",num1);
    }else{
        if(num1 > num2 && num1 > num3){
            printf("O maior eh o num1 = %d\n",num1);
        }else{
            if(num2 > num1 && num2 > num3){
                printf("O maior eh o num2 = %d\n",num2);
            }else{
                if(num2 > num3 && num2 > num1){
                    printf("O maior eh o num2 = %d\n",num2);
                }else{
                    if(num3 > num2 && num3 > num1){
                        printf("O maior eh o num3 = %d\n",num3);
                    }else{
                        if(num3 > num1 && num3 > num2){
                            printf("O maior eh o num3 = %d\n",num3);
                        }
                    }
                }
            }
        }
    }

    return 0;
}
