/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_pc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 01:50:18 by issmith           #+#    #+#             */
/*   Updated: 2018/08/15 03:00:35 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_remove_pc(int nb)
{
	int pc;

	pc = -1;
	pc = g_order[nb];
	if (pc >= 0 && pc <= 2)
		ft_place_zldr('.', pc);
	else if (pc >= 3 && pc <= 5)
		ft_place_zull('.', pc);
	else if (pc >= 6 && pc <= 8)
		ft_place_lrds('.', pc);
	else if (pc >= 9 && pc <= 11)
		ft_place_flsq('.', pc);
	else if (pc >= 12 && pc <= 14)
		ft_place_trtl('.', pc);
	else if (pc >= 15 && pc <= 17)
		ft_place_jdlr('.', pc);
	else if (pc == 18)
		ft_place_ju('.');
}
