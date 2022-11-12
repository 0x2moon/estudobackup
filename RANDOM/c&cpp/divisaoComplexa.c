#include <stdio.h>
#include <stdlib.h>

void banner(int *dvid, int *dsor, int *quo, int *res){
     printf("\v\tResultados\n");
     printf("Dividendo: %d\tDivisor: %d\nResto: %d\tQuociente: %d\n", *dvid, *dsor, *res, *quo);
}
void checks(int *dvid, int *dsor, int *quo, int *res){
     *res = *dvid % *dsor;
     if ( *res != 0)
     { *quo = (*dvid - *res) / *dsor; }
        else{ *quo = *dvid  / *dsor;   }
     banner(dvid, dsor, quo, res);
}
int main(){

    int dividendo, divisor, quociente, resto;
    printf("\vDividendo: ");
    scanf ("%d", &dividendo);
    printf("Divisor: ");
    scanf ("%d", &divisor);
    
    checks(&dividendo, &divisor, &quociente, &resto);
   
    return 0;
}