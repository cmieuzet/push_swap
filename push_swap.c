/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmieuzet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:17:03 by cmieuzet          #+#    #+#             */
/*   Updated: 2022/07/07 11:36:30 by cmieuzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_pile	pile_a;

	pile_a = NULL;

	if (!ft_create_pile(argc, argv, &pile_a))
	{
		ft_putstr_fd("Error\n", 1);
		return (0);
	}
	ft_program -- fait le tri

}

t_element	*element;



