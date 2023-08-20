#include <stdio.h>

int main() {
    float somatorio;
    int n = 0;

    printf("Digite um numero de termos da serie harmonica:");
    scanf("%d",&n);

    for (int i = 1; i <= n; ++i) {
        somatorio = (somatorio+(1/(float)i));
    }
    printf("a somatoria da serie harminica de %d termo(s) = %f",n,somatorio);
    return 0;
}
