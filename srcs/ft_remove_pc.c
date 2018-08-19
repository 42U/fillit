/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_pc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 01:50:18 by issmith           #+#    #+#             */
/*   Updated: 2018/08/19 07:35:21 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_remove_pc(int flag)
{
	int		i;
	int		j;
	char	c;

	c = 65 + flag;
	i = -1;
	while (++i < g_base)
	{
		j = -1;
		while (++j < g_base)
			if (g_square[i][j] == c)
				g_square[i][j] = '.';
	}
}
