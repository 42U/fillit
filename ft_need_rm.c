/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_need_rm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 00:38:58 by issmith           #+#    #+#             */
/*   Updated: 2018/08/15 01:39:34 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_need_rm(void)
{
	int i;

	i = 0;
	if (g_flag == 0)
	{
		while (g_base * g_base < (g_pcs * 4))
			g_base++;
	}	
	else if (g_flag > 0)
	{
		g_base++;
		g_flag = 0;
		return (1);
	}
	ft_create_square(g_base);
	return (0);
}
