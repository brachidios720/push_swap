/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg_utile.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:54:23 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/11/20 20:02:13 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		isalpha(int c)
{
	if ((c >= 58 && c <= 126) || (c >= 33 && c <= 42)
		|| (c == 44) || (c == 46) || (c == 47))
		return (1);
	return (0);
}

void	check_alpha(char **argv)
{
	int		i;
	int		j;

	i = 1;
	while(argv[i])
	{
		j = 0;
		while(argv[i][j] != '\0')
		{
			if(isalpha(argv[i][j]))
					error();
			j++;
		}
		i++;
	}	
}

int		check_args(char **argv)
{
	check_alpha(argv);
	if(!check_error(argv, 1, 0))
		return(false);
	return(true);
}