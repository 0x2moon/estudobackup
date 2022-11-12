#include <stdio.h>
#include "lista.h"

int main(){
    struct lista *primeiralista = create_lista();
   
    // add_lest(primeiralista, get_startNode(primeiralista), get_sizeLista(primeiralista),5);
    // add_lest(primeiralista, get_startNode(primeiralista), get_sizeLista(primeiralista),6);
    // add_lest(primeiralista, get_startNode(primeiralista), get_sizeLista(primeiralista),7);
  
    // add_lest(primeiralista, get_startNode(primeiralista), get_sizeLista(primeiralista),8);

    add_lest2(primeiralista, get_startNode(primeiralista),8);
    add_lest2(primeiralista, get_startNode(primeiralista),6);
    add_lest2(primeiralista, get_startNode(primeiralista),4);

    add_lest2(primeiralista, get_startNode(primeiralista),8);
    add_lest2(primeiralista, get_startNode(primeiralista),6);
    add_lest2(primeiralista, get_startNode(primeiralista),4);

    print_lista(get_startNode(primeiralista));
   // struct nodelista *lis = get_startNode(primeiralista);
    // add_lest3(primeiralista, &lis,4);
    // add_lest3(primeiralista, &lis,4);
    // add_lest3(primeiralista, &lis,4);




// int **size = get_sizeLista(primeiralista);
// printf("\nsize - %d\n",*size);
// *size = 28;
// printf("size - %d",*size);

    return 0;
}