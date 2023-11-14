#include "push_swap.h"

static void     rotate(t_stack **stack)
{
    t_stack *tmp;
    t_stack *point;

    tmp = *stack;
    *stack = (*stack)->next;
    point = do_stack_bottom(*stack);
    tmp->next = NULL;
    point->next = tmp;
}

void    do_rra(t_stack **stack_a)
{
    rotate(*stack_a);
    ft_putstr("rra\n");
}

void    do_rrb(t_stack **stack_b)
{
    rotate(*stack_b);
    ft_putstr("rrb\n");
}

void    do_rrr(t_stack **stack_a, t_stack **stack_b)
{
    rotate(*stack_a);
    rotate(*stack_b);
    ft_putstr("rrr\n");
}