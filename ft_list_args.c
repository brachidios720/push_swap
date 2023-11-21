/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 01:38:17 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/11/21 01:43:46 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	list_args(char **argv, t_stack **stack_a)
{
	long	i;
	
	i = 1;
	while(argv[i] != NULL)
	{
		ft_add_stack_bottom(stack_a, stack_new(ft_atoi(argv[i])));
		i++;
	}
}