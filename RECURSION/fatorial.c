#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int fat(int num){
    if (num == 1)
    {
       return num;
    }
    return num * fat(num -1);    
}

int main(){
  printf("num! = %d", fat(5));
}