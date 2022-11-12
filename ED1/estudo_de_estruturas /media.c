#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    float  nota2;
    float  nota1;
    float  media;
}Aluno;


int main(){

    Aluno aluno1;
    printf("nota 1: ");
    scanf("%f", &aluno1.nota1);
    printf("nota 2: ");
    scanf("%f", &aluno1.nota2);
    aluno1.media = (aluno1.nota1 + aluno1.nota2)/2;
    printf("media: %f ",aluno1.media);
    if (aluno1.media >= 6)
    {
         printf("aprovado");
    }else{
         printf("reprovado");
    }
    
    return 0;
}
