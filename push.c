#include "push_swap.h"

static void    push(t_stack **src, t_stack **dst)
{
    int tmp;

    if(*src == NULL)
        return;
    tmp = (*src)->next;
    (*src)->next = *dst;
    *dst = *src;
    *src = tmp; 
}    

void    do_pa(t_stack **stack_a, t_stack **stack_b)
{
   push(*stack_a, *stack_b);
   putstr("pa\n");
}

void    do_pb(t_stack **stack_a, t_stack **stack_b)
{
    push(*stack_b, *stack_a);
    putstr("pb\n");
}