#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct 
  { 
    char  *nome;
    float *notas; 
    float  media;
    int    qnotas;
  }Aluno;

void banner(){

    printf("\n\t--------------------------Calcular Media--------------------------\n\n");
    printf("Digite os dados de acordo com os pedidos para salvar digite, (salvar).  \n");
    printf("\n\t------------------------------------------------------------------\n\n");
}

void printar(Aluno *notas){
     
     printf("Nome: %s\n", notas->nome);
     printf("Media: %f\n", notas->media);
     for(int i = 0; i < notas->qnotas; i++){
         printf("nota %d = %f\n", i, notas->notas[i]);
     }
}

void create(Aluno *notas){
    
    notas = (Aluno *) malloc (sizeof(Aluno));
    notas->notas = (float *) malloc (sizeof(float));

}

void destroy(Aluno *notas){
    
    free(notas->notas);
    free(notas->nome);
    free(notas);
}

bool continuar (){
    char *choiche;
    scanf("%s",&choiche);
    choiche = (char*) malloc (strlen(choiche) * sizeof (char));
    choiche = toupper(choiche);

    if (choiche)
    {
        /* code */
    }
    

} 

void alocanome(char *nome, Aluno *notas){
    
    notas->nome = (char *) malloc (strlen(nome) * sizeof(char));
}



void aloanotas(Aluno *notas){
    int quant; char s;
    while (s != 's')
      {
        
      }
    
    notas->qnotas = quant;
    notas->notas  = (float *) realloc (notas->notas, quant * sizeof(float));
    }





int main(){
    
    return 0;
}