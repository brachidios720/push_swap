#include "push_swap.h"

t_stack *stack_new(int n)
{
    t_stack *new;

    new = malloc(sizeof(t_node) * n);
    if(!new)
        return(NULL);
    new->len = 0;
    new->head = NULL;
    new->last = NULL;
    return(new);
}

struct node {
    int value;
    struct node *next;
    struct node *previous;
}

struct stack {
    struct node *head;
    int len;
}

t_stack *do_stack_bottom(t_stack *stack)
{
    while(stack && stack->next != NULL)
        stack = stack->next;
    return(stack);
}

void    add_stack_bottom(t_stack **stack, t_stack *new)
{
    t_stack *tmp;

    if(!new)
        return;
    if(!*stack)
    {
        *stack = new;
        return;
    }
    tmp = do_stack_bottom(*stack);
    tmp->next = new;
}

void    get_stack_size(t_stack *stack)
{
    int i;

    i = 0;
    if(!stack)
        return;
    while(stack)
    {
        stack = stack->next;
        i++;
    }
    return(i);
}