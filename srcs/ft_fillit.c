/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 23:57:31 by issmith           #+#    #+#             */
/*   Updated: 2018/08/16 16:31:35 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** this is where the solving and recursion happen
*/

void		fillit(char **alph, int flag)
{
	int end;

	end = 0;
	while (!end) 
	{
		g_base += 1;
		ft_need_rm();
		end = ft_solve(alph, flag);
		if (end)
			ft_print_arr();
		g_flag = 1;
	}
}























































