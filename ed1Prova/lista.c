#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct lista
{
    int *size;
    struct nodelista *start;
};

struct nodelista
{
    int value;
    struct nodelista *prox;
};

struct lista *create_lista()
{
    struct lista *new = (struct lista *)malloc(sizeof(struct lista));
    new->start = NULL;
    new->size = 0;
    return new;
}

struct nodelista *create_node_lista()
{
    struct nodelista *newnode = (struct nodelista *)malloc(sizeof(struct nodelista));
    newnode->prox = NULL;
}

struct nodelista *get_startNode(struct lista *lista)
{
    return lista->start;
}

int **get_sizeLista(struct lista *lista)
{
    return &lista->size;
}

void add_lest(struct lista *lista, struct nodelista *node, int **size, int value)
{

    //     if (*size == 0)
    //         {
    //             lista->start = create_node_lista();
    //             lista->start->value = value;
    //             *size++;
    //             return;
    //         }

    //     if (node->prox == NULL)
    //         {
    //             node->prox = create_node_lista();
    //             node->prox->value = value;
    //             *size++;
    //             return;
    //         }
    //    add_lest(lista, node->prox, size, value);

    // nao recursivo
    if (*size == 0)
    {
        lista->start = create_node_lista();
        lista->start->value = value;
        *size++;
        return;
    }
    while (node != NULL)
    {
        add_lest(lista, node->prox, size, value);
    }
    node->prox = create_node_lista();
                node->prox->value = value;
                *size++;
}

int __isEmpty(struct lista *lls){
    if (lls->size == 0 && lls->start == NULL)
     {
        return 1;
     }
    return 0;
}

void add_lest2(struct lista *lls, struct nodelista *lln, int value){
    if (__isEmpty(lls) == 1)
    {
   
        lls->start = create_node_lista();
        lls->start->prox  = NULL;
        lls->start->value = value;
        lls->size++;
        return;
    }
        if (lln->prox == NULL)
        {
            lln->prox   = create_node_lista();
            lln->prox->prox = NULL;
            lln->prox->value = value;
            lls->size++;
            return;
        }
            add_lest2(lls, lln->prox, value);
}


// void add_lest4(struct lista *lls, struct nodelista *lln, int value){
//     if (__isEmpty(lls) == 1)
//     {
   
//         lls->start = create_node_lista();
//         lls->start->prox  = NULL;
//         lls->start->value = value;
//         return;
//     }
//         if (lls->start->prox == NULL)
//         {
//             lls->start->prox  = create_node_lista();
//             lls->start->prox->prox = NULL;
//             lls->start->prox->value = value;
//             lls->size++;
//             return;
//         }
//             add_lest2(lls, lls->start->prox->prox, value);
// }



/*void add_lest3(struct lista *lls, struct nodelista **lln, int value){
    if (__isEmpty(lls) == 1)
    {   struct nodelista *aux = create_node_lista();
        aux = *lln;
        lln = create_node_lista(); 
        // *lln = (struct nodelista *) lln;
        // lls->start = create_node_lista();
        (*lln)->prox = NULL;
        // lls->start->prox  = NULL;
        (*lln)->value = value;
        // lls->start->value = value;

        return;
    }
        if ((*lln)->prox == NULL)
        {
            (*lln)->prox   = create_node_lista();
            (*lln)->prox->prox = NULL;
            (*lln)->prox->value = value;
            lls->size++;
            return;
        }
            add_lest3(lls, &(*lln)->prox, value);
}

*/


int get_value(struct nodelista *l)
{
    return l->value;
}

void print_lista(struct nodelista *lln)
{
    // if (*node != NULL)
    // {
    //     int *a = &node->value;
    //     fprintf(stdout, " %d -> ",a);
    //     struct nodelista **n = &node->prox;
    //     print_lista(n);
    // }
    // puts(" NULL");
    if (lln != NULL)
    {
        printf(" %d ->", get_value(lln));
        print_lista(lln->prox);
    }
    else
    {
        printf(" NULL ");
    }
}
