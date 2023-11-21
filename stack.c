#include "push_swap.h"

t_stack *stack_new(int n)
{
    t_stack *new;

    new = malloc(sizeof(t_stack));
    if(!new)
        error();
    new->nbr = content;
    new->last = NULL;
    return(new);
}

t_stack *do_stack_bottom(t_stack *stack)
{
    while(stack && stack->next != NULL)
        stack = stack->next;
    return(stack);
}

void    add_stack_bottom(t_stack **stack, t_stack *new)
{
    if(!new)
        return;
    if(!*stack)
    {
        *stack = new;
        return;
    }
    else
        (do_stack_bottom(*stack))->next = new;
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