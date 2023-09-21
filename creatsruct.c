#include "push_swap.h"

t_stack  ft_creat_struct(int ac, char **av)
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
        
    }

}
