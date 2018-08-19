/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 23:57:31 by issmith           #+#    #+#             */
/*   Updated: 2018/08/18 03:26:02 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** this is where the solving and recursion happen
*/

void		fillit(int *g_order, int flag)
{
	int end;

	end = 0;
	while (!end) 
	{
		g_base += 1;
		g_flag = 1;
		ft_need_rm();
		flag = 0;
		end = ft_solve(g_order, flag, g_pcs); // changed flag to 0
		if (end)
			ft_print_arr();
	}
}























































