#ifndef STACK_H
#define STACK_H

struct stack
{
    int size;
    struct stack_node *start;
    struct stack_node *end;
};

struct stack_node
{
    int nome;
    struct stack_node *prev;
    struct stack_node *next;
};

struct stack *create_stack();
struct stack_node *create_stack_node();
struct stack *merge(struct stack *aS, struct stack *bS);

void stackPush (struct stack *lls, struct stack_node *lln, int value);
void destroy_stack(struct stack **lls);
void remove_all_Stack(struct stack_node *lln);

int __get_Size(struct stack *lls);
int __isEmpty(struct stack *lls);

void print_lls(struct stack_node *lln);
void merge_(struct stack *primeira, struct stack *segunda);

#endif