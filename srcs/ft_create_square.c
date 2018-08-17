/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_square.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 10:33:02 by jxie              #+#    #+#             */
/*   Updated: 2018/08/09 09:27:14 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_create_square(size_t size)
{
	size_t i; 
	size_t j;

	g_square = (char **)ft_memalloc((size) * (size) + 1);
	i = 0;
	while (i < size)
	{
		j = 0;
		g_square[i] = (char *)ft_memalloc(1);
		while (j < size)
		{
			g_square[i][j] = '.';
			j++;
		}
		i++;
	}
}
