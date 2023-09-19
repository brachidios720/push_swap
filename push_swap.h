#ifndef PUSH_SWAP.H
# define PUSH_SWAP.H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct  s_stack
{
    int     value;
    int     index;
    int     pos;
    int     target_pos;
    int         a;
    int         b;
    struct s_stack  *next;
}   t_stack;

void    ft_sa(s_stack a);
