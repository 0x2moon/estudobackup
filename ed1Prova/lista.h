#ifndef LISTA_H
#define LISTA_H

struct lista;
struct nodelista;

struct lista *create_lista();
struct nodelista *create_node_lista();

void add_lest(struct lista *lista, struct nodelista *node, int **size, int value);
void add_lest2(struct lista *lls, struct nodelista *lln, int value); /*G*/
void add_lest3(struct lista *lls, struct nodelista **lln, int value);


struct nodelista *get_startNode(struct lista *lista); /*G*/

int **get_sizeLista(struct lista *lista);

int get_value(struct nodelista *l); /*G*/
int __isEmpty(struct lista *lls); /*G*/

void print_lista(struct nodelista *lln);
#endif