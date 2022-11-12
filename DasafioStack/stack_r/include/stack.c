#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../lib/stack.h"

struct stack *create_stack(){
    struct stack *llnew = (struct stack *) malloc (sizeof(struct stack));
    llnew->size  = 0;
    llnew->start = NULL;
    llnew->end   = NULL;
    return llnew;    
}

struct stack_node *create_stack_node(){
    struct stack_node *llnewnode = (struct stack_node *) malloc (sizeof(struct stack_node));
    llnewnode->prev = NULL;
    llnewnode->next = NULL;
    return llnewnode;
}

void stackPush (struct stack *lls, struct stack_node *lln, int value){
    if (__isEmpty(lls) == 1)
    {
        struct stack_node *llnew = create_stack_node();
        lls->start = llnew;
        lls->end   = llnew;
        llnew->prev = NULL;
        llnew->next = NULL;
        llnew->nome = value;
        lls->size++;
    }else{

        struct stack_node *llnew = create_stack_node();
        llnew->prev = lls->end;
        llnew->next = NULL;
        llnew->nome = value;
        lls->end = llnew;
        lls->size++;
    }
}

void destroy_stack(struct stack **lls){
    struct stack *laux = create_stack();
    laux = *lls;
    remove_all_Stack(laux->end);
    *lls = NULL;
     free(*lls);
}

void remove_all_Stack(struct stack_node *lln){
    struct stack_node *llnaux = create_stack_node();
    llnaux = lln;
    if (llnaux != NULL){
        remove_all_Stack(llnaux->prev);       
    }
    //llnaux = NULL;
    free(llnaux);
    puts("+ um free");
}

int __get_Size(struct stack *lls){
    return lls->size;
}

int __isEmpty(struct stack *lls){
    if (lls->size == 0 && lls->start == NULL){
        return 1;
    }
    return 0;
}

void print_lls(struct stack_node *lln){
    if (lln != NULL){
        printf(" -> %d\n", lln->nome);
        print_lls(lln->prev);
    }
    else{  
        printf("\n-> NULL ");
    }
    
}


struct stack *merge(struct stack *aS, struct stack *bS){
    struct stack *mergeStack = create_stack();
    mergeStack->start = aS->start;
    mergeStack->end  = bS->end;
    bS->start->prev = bS->start->next;
    aS->end->next = aS->end->prev;

    bS->start->prev = aS->end->prev;
    aS->end->next   = bS->start->next;

    mergeStack->size = aS->size + bS->size;
    return mergeStack; 
}
