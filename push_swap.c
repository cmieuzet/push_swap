/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmieuzet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:17:03 by cmieuzet          #+#    #+#             */
/*   Updated: 2022/07/22 14:43:31 by cmieuzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_pile	pile_a;
	t_pile	pile_b;

	pile_a = NULL;
	pile_b = NULL;
	if (argc < 2)
		return (1);
	if (argc == 2)
		ft_parsing_one(argv[1], &pile_a);
	else (argc > 2)
		ft_parsing_multiple(argc, argv, &pile_a);
}
