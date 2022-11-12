#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Produtos {
    char *nome;
    struct Produtos *prox;
};

struct Lprodutos {
    int index, capacidade;
    struct Produtos *produtos;
};

struct Lprodutos *create(){
    struct Lprodutos * Listedeproduto = (struct Lprodutos *) malloc (sizeof(struct Lprodutos));
    return Listedeproduto;
}

void insert(struct Lprodutos *Listedeproduto, char *nome, int index){
    Listedeproduto->produtos = (struct Produtos *) malloc(sizeof(struct Produtos));
    Listedeproduto->produtos[index].nome = (char *) malloc (strlen(nome) * sizeof(char));
    Listedeproduto->produtos[index].nome = nome;
}

void destroy(struct Lprodutos *Listedeproduto){
    free(Listedeproduto->produtos->nome);
    free(Listedeproduto->produtos);
    free(Listedeproduto);
}

int main(){

    struct Lprodutos *lista; char *nome;
    lista = create(nome);
    printf("nome: ");
    scanf(" %c", nome);
    insert(lista, nome);

    return 0;
}   
