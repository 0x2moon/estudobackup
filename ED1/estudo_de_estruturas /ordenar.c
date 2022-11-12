#include <stdio.h>
#include <stdlib.h>
#define SIZE_VECTOR 10

void swp(int *a, int *b){
    int aux;
    aux = *a;
    *a =  *b;
    *b = aux;
}

void printfvector(int *vector){     
    for (int i = 0; i < SIZE_VECTOR; i++){
       printf("vector[%d] = %d \n", i, vector[i]);
    }
}

int *createvector(int size){
    int *vector = (int *) malloc (size * sizeof(int));
        for (int i = 0; i < size; i++){
            vector[i] = rand() % size;
        }
    return vector;
}

void bublle(int *vector){
    for (int i = 0; i < SIZE_VECTOR - 1; i++){
        for (int j = 0; j < SIZE_VECTOR - 1; j++){
             if(vector[j] > vector[j+1]){
                swp(&vector[j], &vector[j+1]);
             }
        }
    }
}

void destroy(int *vector){
    free(vector);    
}

int main(){
    int *vector;
    vector = createvector(10);
    printfvector(vector);
    /*bublle(vector);
    printfvector(vector);
    */
   destroy(vector);
    return 0;
}