/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:01:11 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/11/14 22:39:41 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	sort_three_elements(t_stack *s)
{
	if (s->tab_a[2] != 2)
	{
		if (s->tab_a[0] == 2)
			rotate(s->tab_a);
		else
			rotate(s->tab_a);
	}
	if (s->tab_a[0] > s->tab_a[1])
		swap(s->tab_a);
}

void	sort_four_to_five_elements(t_stack *s)
{
	while (s->tab_b->value <= 1)
	{
		if (s->tab_a[0] == 0 || s->tab_a[0] == 1)
			push("pb", s);
		else
			rotate(s->tab_a);
	}
	if (s->tab_b[0] == 0)
		swap(s->tab_b);
	if (s->tab_a[2] != 4)
	{
		if (s->tab_a[0] == 4)
			rotate(s->tab_a);
		else
			rotate(s->tab_a);
	}
	if (s->tab_a[0] > s->tab_a[1])
		swap(s->tab_a);
	push(s);
	push(s);
}

int	is_array_sorted(t_stack *s)
{
	int	i;

	i = 0;
	while (i < s->value - 1)
	{
		if (s->tab_a[i] > s->tab_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

static void	radix_sort_stack_b(t_stack *s, int b_size, int bit_size, int j)
{
	while (b_size-- && j <= bit_size && !is_array_sorted(s))
	{
		if (((s->tab_b[0] >> j) & 1) == 0)
			rotate(s->tab_b);
		else
			push(s);
	}
	if (is_array_sorted(s))
		while (s->value != 0)
			push(s);
}

void	radix_sort(t_stack *s)
{
	int	j;
	int	bit_size;
	int	size;

	bit_size = 0;
	size = s->value;
	while (size > 1 && ++bit_size)
		size /= 2;
	j = -1;
	while (++j <= bit_size)
	{
		size = s->value;
		while (size-- && !is_array_sorted(s))
		{
			if (((s->tab_a[0] >> j) & 1) == 0)
				push("pb", s);
			else
				rotate(s->tab_a);
		}
		radix_sort_stack_b(s, s->value, bit_size, j + 1);
	}
	while (s->value != 0)
		push(s);
}