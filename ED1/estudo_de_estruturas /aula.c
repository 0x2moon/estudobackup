#include <stdio.h>
#include <stdlib.h>

void swp(int *a, int *b){
    int *aux;
    aux = a;
    a = b;
    b = aux;
}

void  bublle(int *vector, int size){

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (vector[j] > vector[j+1])
            {
                swp(&vector[j], &vector[j+1]);
            }
            
        }
        
    }
    

}
void printfvector(const int vector[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("vector[%d] = %d \n", i, vector[i]);
    }
    
}
int main(){

    int *a, *b; *a=10; *b=15;
    printf("A = %d, B = %d \n", *a,*b);
    swp(a,b);
    printf("A = %d, B = %d", *a,*b);
    /*int vector[] = {7,8,0,1,3,8,2,9};
    printfvector(vector, 8);
    bublle(vector, 8);
    printf("\n\nORd\n\n");
    printfvector(vector, 8);*/

    return 0;
}
