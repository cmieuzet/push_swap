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

int	ft_error_one(char *str)
{
	char **tab;
	int	i;

	*tab = ft_split(str, ' ');
	i = -1;
	while (tab[++i])
		ft_checkstr(tab[i]);
	i = -1;
	while (tab[++i])
	{
		ft_atoi_boost(tab[i]);
		t_pile = 

	}
}




	if (str[0] == '-' && !ft_checkstr(str[1]))
		ft_return_error();
	while ()
	{
		if (!ft_checkstr(str[i]))
			ft_return_error();
		if (!ft_checkneg(str[i]))
			ft_return_error();
		if 
	}
}

{
	char **tab;
	int	i;

	i = 0;
	*tab = ft_split(str, ' ');
	while (tab[i])
	{
		if (ft_atoi_boost(tab[i]))
		{
			ft_putstr_fd("Error\n", 1);
			free (tab);
			exit (1);
		}
	}
	free (tab);
}
