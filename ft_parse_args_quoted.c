/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_args_quoted.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 01:46:25 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/11/21 18:52:24 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_freestr(char **lst)
{
	char	*t1;

	if(!lst)
		return;
	while(*lst)
	{
		t1 = *lst;
		lst++;
		free(t1);
	}
	*lst = NULL;
}

t_stack *ft_parse_args_quoted(char **argv)
{
	t_stack	*stack_a;
	char	**tmp;
	
	stack_a = NULL;
	tmp = ft_split(argv[1], 32);
	list_args(tmp, &stack_a);
	ft_free(tmp);
	free(tmp);
	return(stack_a);
}
