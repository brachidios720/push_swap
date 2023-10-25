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