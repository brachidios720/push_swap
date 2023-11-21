/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:02:51 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/11/21 01:29:33 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_checkdup(t_stack *a)
{
	t_stack *tmp;
	
	while(a)
	{
		tmp = a->next
		while(tmp)
		{
			if(a->nbr == tmp->nbr)
				return(1);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return(0);
}