#include <stdio.h>
#include <stdlib.h>

struct node
{
    char *nick;
    struct node *next;
};

struct nodeList
{
    int size, capacity;
    struct node *nodes;
};

struct nodeList *create(){
    struct nodeList *nodelist = (struct nodeList *) malloc (sizeof(struct nodeList));
    nodelist->capacity = 0;
    nodelist->size = 0;
    return nodelist;
}

void insert(struct nodeList *nodelist){
    
}

int main(){

    return 0;
}