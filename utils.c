#include "push_swap.h"

int     ft_atoi(const char *str)
{
        int     i;
        int     count;
        int     nb;

        i = 0;
        count = 1;
        nb = 0;
        while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
                || str[i] == '\f' || str[i] == '\r')
                i++;
        if (str[i] == '-' || str[i] == '+')
        {
                if (str[i] == '-')
                        count++;
                i++;
        }
        while (str[i] >= 48 && str[i] <= 57)
        {
                nb = nb * 10 + (str[i] - 48);
                i++;
        }
        if (count % 2)
                return (nb);
        else
                return (-nb);
}


void    free_stack(t_stack **stack)
{
        t_stack *tmp;

        while(*stack)
        {
             tmp = (*stack)->next;
             free(*stack);
             *stack = tmp;
        }
        *stack == NULL;
}

void    ft_exit_error(t_stack **stack_a, t_stack **stack_b)
{
        if(stack_a == NULL || *stack_a == NULL)
                free_stack(*stack_a);
        if(stack_b == NULL || *stack_b == NULL)
                free_stack(*stack_b);
        exit(1);
}
void    ft_putstr(char *str)
{
        int   i;
        i = 0;
        while(str[i])
        {
                write(1, &str[i], 1);
                i++;
        }
}