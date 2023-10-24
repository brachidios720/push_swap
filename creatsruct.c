#include "push_swap.h"

t_stack  *ft_creat_struct(int ac, char **av)
{
    t_stack     *stack_a;
    long int    nb;
    int         i;

    stack_a = NULL;
    nb = 0;
    i = 1;
    while (i < ac)
    {
            nb = ft_atoi(av[i]);
            if(nb > INT_MAX || nb < INT_MIN)
                ft_exit_error(&stack_a, NULL);
            if(i == 1)
                stack_a = stack_new((int)nb);
            else
                add_stack_bottom(&stack_a, stack_new((int)nb));
            i++;
    }
    return(stack_a);
}


void    assign_index(t_stack *stack_a, t_stack *stack_size)
{
    t_stack *ptr;
    t_stack *high;
    int     value;

    while(--stack_size > 0)
    {
        ptr = stack_a;
        value = INT_MIN;
        high = NULL;
        while(ptr)
        {
            if(ptr->value == INT_MIN && ptr->index == 0)
                    ptr->index = 1;
            if(ptr->value > value && ptr->index == 0)
            {
                value = ptr->value;
                high = ptr;
                ptr = stack_a; 
            }
            else 
                ptr = ptr->next;
        }
        if(high != NULL)
            high->index = stack_size;
    }
}