/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:53:48 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/11/21 18:57:09 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_parse(int argc, char **argv)
{
	t_stack	*stack_a;

	stack_a = NULL;
	if(argc < 2)
		error();
	else if(argc == 2)
		stack_a = ft_parse_args_quoed(argv);
	else
	{
		list_args(argv, &stack_a);
	}
	return(stack_a);
}

