/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmieuzet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:17:03 by cmieuzet          #+#    #+#             */
/*   Updated: 2022/07/05 17:33:14 by cmieuzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_pile	*pile_a;

	if (!ft_create_pile(argc, argv))
	{
		ft_putstr_fd("Error\n", 1);
		return (0);
	}
}
