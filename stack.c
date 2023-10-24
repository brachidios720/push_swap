#include "push_swap.h"

t_stack *stack_new(int n)
{
    t_stack *new;

    new = malloc(sizeof * new);
    if(!new)
        return(NULL);
    new->value = value;
    new->index = 0;
    new->pos = 1;
    new->target_pos = -1;
    new->tab_a = -1;
    new->tab_b = -1;
    new->next = NULL;
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