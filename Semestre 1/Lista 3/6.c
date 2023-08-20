#include <stdio.h>

int main() {
    int inicial, final, incremento;

    printf("Declare o inicio :");
    scanf("%d",&inicial);

    printf("Declare o final :");
    scanf("%d",&final);

    printf("Declare o incremento :");
    scanf("%d",&incremento);

    for(inicial; inicial <= final;inicial = inicial + incremento){
        printf(" %d",inicial);
    }
    return 0;
}
