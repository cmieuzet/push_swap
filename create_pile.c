/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_pile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmieuzet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:52:44 by cmieuzet          #+#    #+#             */
/*   Updated: 2022/07/07 12:23:18 by cmieuzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_create_pile(int argc, char **argv, t_pile *pile_a)
{
	int	i;

	i = 1;
	if (argc < 2)
		return (NULL);
	if (argc == 2)
		ft_error_one(argv, pile_a);
	else
	{
		while (i <= argc)
		{
			ft_error_many(argv[i], &pile_a);
			i++;
		}
	}
}

return int error = same pour les ft_error;
