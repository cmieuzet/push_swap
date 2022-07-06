/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmieuzet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:14:00 by cmieuzet          #+#    #+#             */
/*   Updated: 2022/07/05 17:17:41 by cmieuzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

typedef struct s_element
{
	struct s_pile	*next;
	int				data;
}			t_element;

typedef struct s_pile
{
	t_element	*top;
}			t_pile;

#endif
