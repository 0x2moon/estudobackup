#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printar(char *nome, int t){
    if (t > 0)
    {
      printar(nome, t-1);   
    }
 printf("%c",nome[t]);
}

int main(){
    char *nome = "gabibela";
    printar(nome, strlen(nome));
    return 0;
}