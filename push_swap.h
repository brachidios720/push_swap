/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 23:06:10 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/11/14 23:19:24 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    int         *tab;
    struct s_stack  *next;
}   t_stack;

// init struct

t_stack  ft_creat_struct(int ac, char **av);
t_stack *stack_new(int n);
void    get_stack_size(t_stack *stack);
void    assign_index(t_stack *stack_a, t_stack *stack_size);


// move

void    do_sa(t_stack a);
void    do_sb(t_stack **stack_b);
void    do_ss(t_stack **stack_a, t_stack **stack_b);
void    do_pa(t_stack **stack_a, t_stack **stack_b);
void    do_pb(t_stack **stack_a, t_stack **stack_b);
void    do_rra(t_stack **stack_a);
void    do_rrb(t_stack **stack_b);
void    do_rrr(t_stack **stack_a, t_stack **stack_b);

// utils

void    ft_putstr(char *str);
int     ft_atoi(const char *str);

// error

void    free_stack(t_stack **stack);
void    ft_exit_error(t_stack **stack_a, t_stack **stack_b);
t_stack *do_stack_bottom(t_stack *stack);
void    add_stack_bottom(t_stack **stack, t_stack *new);


#endif
