#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct 
{
    int id;
    char *nome;
    struct Produtos *prox;

}Produtos;

typedef struct
{
    int index, capacity;
    Produtos *produtos;

}Lpro;

void *create(Lpro *listaProdutos){
    listaProdutos = (Lpro *) malloc (1 * sizeof(Lpro));
    listaProdutos->index = 0;
    listaProdutos->capacity = 1;
    listaProdutos->produtos = (Produtos *) malloc ((listaProdutos->capacity * sizeof(Produtos)));
}

void destroy(Lpro *listaProdutos){
    free(listaProdutos->produtos);
    free(listaProdutos);
}

bool _isfull(Lpro *listaProdutos){
    if (listaProdutos->capacity == listaProdutos->index)
        {
            return true;
        }
    return false;
}
void insertnome(Lpro *listaProdutos, char *nome){
    int sizename = 0;
    nome:
        if (nome[sizename] != '\0')
        {
            sizename++;
            goto nome;
        }
    listaProdutos->produtos->nome = (char *) malloc (sizename * sizeof(char));
    listaProdutos->produtos->nome = nome;
}

void resizecapacity(Lpro *listaProdutos, int n){
    listaProdutos->produtos = realloc(listaProdutos->produtos , n * sizeof(Lpro));
}

void append(Lpro *listaProdutos, char *nome){
   append:
        if (_isfull(listaProdutos) == true)
        {
            resizecapacity(listaProdutos, listaProdutos->capacity+1);
            printf("foi realocado");         
            goto append;
        }
        insertnome(listaProdutos, nome);
        listaProdutos->index = 0;
        fprintf(stdout,"id: ");
        scanf("%d", &listaProdutos->produtos->id);
        listaProdutos->index++;
   
    
}

void printlista(Lpro *listaProdutos){
    printf("\tLista de produtos\n---------------------------------");
    printf("\tCapacity: %d", listaProdutos->capacity);
    printf("\tIndex: %d\n",listaProdutos->index);
    printf("\tId:%d\nNome do produto: %s ",listaProdutos->produtos->id, listaProdutos->produtos->nome);
    for (int i = 0; listaProdutos->produtos->nome[i] != '\0'; i++)
        {
            printf("%c",listaProdutos->produtos->nome[i]);
        }   
    
    }

int main(){

    Lpro   *produtoslista; char *nome;
    create (produtoslista);    
    fprintf(stdout, "Digite o nome: ");
    scanf  ("%s", nome);
    append (produtoslista, nome);
    printlista (produtoslista);
    //destroy(produtoslista);
    return 0;
    
}