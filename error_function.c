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

int	ft_checkstr(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-' && !ft_checknum(str[1]));
		ft_pusherror();
	while (str[i])
	{
		if ((str[i] < '0' && str[i] > '9')
		return (1);
	else
		return (0);
}
