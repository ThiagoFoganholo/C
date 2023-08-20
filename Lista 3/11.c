#include <stdio.h>

int main() {
    float zerg = 1.5;
    float splim = 1.3;
    float zergCrescimentoAno = 0.02;
    float splimCrescimentoAno = 0.03;
    int contadorDeAnos = 0;

    do{
        zerg = zerg + zergCrescimentoAno;
        splim = splim + splimCrescimentoAno;
        contadorDeAnos++;
    }while(splim <= zerg);

    printf("Altura de Zerg = %.3f m\n",zerg);
    printf("Altura de Splim = %.3f m\n",splim);
    printf("A quantidade de anos ate que Splim seja maior que Zerg eh %d anos\n",contadorDeAnos);

    return 0;
}
