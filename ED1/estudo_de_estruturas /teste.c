#include <stdio.h>
#include <stdlib.h>

typedef struct 
  {
  int quant_notas;
  float *notas;
  float  media;
  }Aluno;

void 
createvector(Aluno *aluno, int tam)
  {
  aluno = (Aluno *) malloc (tam * sizeof(Aluno));
  aluno->quant_notas = tam;
  }
  
void 
destroy (Aluno *aluno)
  {
  //free(aluno);  
  //free(aluno);
  }

void 
media(Aluno *notas, int tam)
  {
  notas->media = 0;

  for (int i = 0; i < tam; i++)
    {
    notas->media =  (notas->media + notas->notas[i]);
    }
  notas->media = notas->media / notas->quant_notas;
  }

void 
printfvec(Aluno *aluno, int tam)
  {
  printf("-------------------------------------------");
  printf("\nDados\n");
  for (int i = 0; i < tam; i++)
    {
    printf("\tnotas[%d] = %f\n",  i, aluno->notas[i]);     
    }
  printf("\nmedia = %f \n", aluno->media);
  printf("-------------------------------------------");

  }

int 
main()
  {

  Aluno *aluno1; int tam = 0;

  printf("Digite a quantidade de notas: ");
  scanf("%d", &tam);
  printf("Digite as notas: ");
  createvector(aluno1, tam);
  for (int i = 0; i < tam; i++)
    {
    printf("Digite as notas: ");
    scanf("%f", &aluno1->notas[i]);
    }
  media(aluno1, tam);
  printfvec(aluno1, tam);
  //destroy(aluno1);
  return(0);
  }
