/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmieuzet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:52:44 by cmieuzet          #+#    #+#             */
/*   Updated: 2022/06/28 19:52:47 by cmieuzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pile	*ft_create_pile(int argc, char **argv)
{
	t_pile	pile_a;
	int	i;

	i = 1;
	if (argc < 2)
		return (NULL);
	if (argc == 2)
		pile_a = ft_error_one(argv);
	else
	{
		while (i <= argc)
		{
			pile_a = ft_error_many(argv[i], &pile_a);
			i++;
		}
	}
}
