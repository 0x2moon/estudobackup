#include <stdio.h>
#include <stdlib.h>
#include "./../lib/stack.h"

int main(){
    struct stack *stack1 = create_stack();
    struct stack *stack2 = create_stack();
    struct stack *MergeStack = create_stack();

    for (int i = 0; i < 4; i++)
    {
        stackPush(stack1, stack1->start, (i+1)*10);
    }
    
    for (int i = 0; i < 7; i++)
    {
        stackPush(stack2, stack1->start, i+1);
    }

    puts("\nstack 1\n");
    print_lls(stack1->end);
    puts("\nstack 2\n");
    print_lls(stack2->end);
    
    puts("\nMerge 1\n");
    MergeStack = merge(stack1, stack2);
    print_lls(MergeStack->end);

    return 0;
}