#ifndef PUSH_SWAP.H
# define PUSH_SWAP.H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>


typedef struct  s_stack
{
    int     value;
    int     index;
    int     pos;
    int     target_pos;
    int         tab_a;
    int         tab_b;
    struct s_stack  *next;
}   t_stack;

t_stack  ft_creat_struct(int ac, char **av);
void    do_sa(t_stack a);
void    do_sb(t_stack **stack_b)
int     ft_atoi(const char *str);
t_stack *stack_new(int n);
void    free_stack(t_stack **stack);
void    ft_exit_error(t_stack **stack_a, t_stack **stack_b);
void    get_stack_size(t_stack *stack);
void    assign_index(t_stack *stack_a, t_stack *stack_size);
void    ft_putstr(char *str);