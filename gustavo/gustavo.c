#include <stdio.h>  // Declarar biblioteca "stdio.h"
#include <stdlib.h>  // Declarar biblioteca "stdlib.h"

int 
main()  // Função Principal
{
  int l1, l2, l3;  // Declarando váriaveis abreviadas para "lado1", "lado2" e "lado3"

  printf ("Digite o valor em módulo dos 3 lados\n");  // Pedindo ao usuário digitar o valor para os 3 lados
  scanf ("%d %d %d", &l1, &l2, &l3);  // Lendo os valores dos 3 lados

 
if(((( lado_a > abs( lado_b - lado_c)) && (lado_a < lado_b + lado_c)) && (( lado_b > abs( lado_a - lado_c)) && (lado_b < lado_a + lado_c))) && ((( lado_c > abs( lado_a - lado_b)) && (lado_c < lado_a + lado_b))))
 
 // if((l1 + l2 > l3) && (l2 + l3 > l1)) && (((l3 + l1 > l2)) && (((abs(l2-l3)<l1)) && ((abs(l1-l3)<l2)) && (abs(l1-l2)<l3)))
 // Verificação do triângulo (14/15 parênteses)
  {
    if (((l1 != l2) && (l2 != l3)) && (l3 != l1))  // Verificação do triângulo escaleno (5/6 parênteses)
    {
      printf ("É um triângulo escaleno!\n");  // Escreva que é um triângulo escaleno
      
    }
    if ((((l1 == l2) && (l1 != l3)) || ((l2 == l3) && (l2 != l3))) || ((l1 == l3) && (l1 != l2)))  // Verificação do triângulo isóceles (11/12 parênteses)
    {
      printf ("É um triângulo isóceles!\n");  // Escreva que é um triângulo isóceles
      
    }
    if ((l1 == l2) && (l2 == l3))  // Verificação do triângulo equilátero (3 parênteses)
    {
      printf ("É um triângulo equilátero!\n");  // Escreva que é um triângulo equilátero
      
    }
  }
  else  // Se não for um triângulo
  {
    printf ("Não é um triângulo!\n");  // Escreva que não é um triângulo
    
  }
  return(0);  // Retorno para a função "main"
}

