#include <stdio.h>
#include <stdlib.h>

//struct estilo recursiva

struct Lista
{
    int num;
    struct lista *next;
    
}lista;


int main(){

     struct lista *numeros;

    numeros = (struct lista *) malloc (4 * sizeof(struct lista));
    for (int i = 0; i < 4; i++)
    {
        if (i == 3)
        {
            numeros[i].num = i*1;
            numeros[i].next = NULL; 
        }
        numeros[i].num = i*1;
        numeros[i].next = &numeros[i+1]; 
    }
    
    for (int i = 0; numeros[i].next != NULL; i++)
    {
        printf("numeros[%d] = %d", i, numeros[i].num);       
    }
    
    

    return 0;
}