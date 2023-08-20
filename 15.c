 #include <stdio.h>

int main() {
    float nota1, nota2, nota3, media,somaNotas;

    printf("Entrar com uma nota validade de 0 a 10\n");

    printf("Declare a nota1:");
    scanf("%f",&nota1);

    printf("Declare a nota2:");
    scanf("%f",&nota2);

    printf("Declare a nota3:");
    scanf("%f",&nota3);

    if(nota1 >=0 && nota1 <= 10){
        if(nota2 >=0 && nota2 <= 10){
            if(nota3 >=0 && nota3 <= 10){

                somaNotas = nota1 + nota2 + nota3;
                media = somaNotas/3;

                if(media >= 7){
                    printf("aprovado, com nota %f",media);
                }else{
                    printf("Reprovado, com nota %f",media);
                }

            }else{
                printf("Nota invalida!!");
            }
        }else{
            printf("Nota invalida!!");
        }
    }else{
        printf("Nota invalida!!");
    }
    return 0;
}
