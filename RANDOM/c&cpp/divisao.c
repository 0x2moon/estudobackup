#include <stdio.h>  //importar biblioteca
#include <stdlib.h> //importar biblioteca

int main(){ //função principal do c

    int divisor, //declarar variável
    dividendo,   //declarar variável
    quociente,   //declarar variável
    resto;       //declarar variável

    printf("\vDividendo: ");  //escreve na tela
    scanf ("%d", &dividendo); //pega o q é digitado no teclado
    printf("Divisor: ");      //escreve na tela
    scanf ("%d", &divisor);   //pega o q é digitado no teclado

    resto = dividendo % divisor; //pega o resto da divisão

    if ( resto != 0){ //compara se o resto é diferente de zero
        
         quociente = (dividendo - resto ) / divisor; //encontra o valor do quociente
         printf("Divisor: %d\tDividendo: %d\nResto: %d\tquociente: %d  ",divisor, dividendo, resto, quociente);  //escreve na tela

    }else { // continuação da condição if
        
        quociente = dividendo / divisor; //encontra o valor do quociente
         printf("Dividendo: %d\tDivisor: %d\nResto: %d\tquociente: %d  ", dividendo, divisor, resto, quociente);  //escreve na tela

    }

    return 0; // retorno padrao da função main
}