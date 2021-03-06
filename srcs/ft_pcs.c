/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pcs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 15:51:43 by issmith           #+#    #+#             */
/*   Updated: 2018/07/30 06:08:17 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pcs(char *str)
{
	int i;
	int x;

	x = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == '\n' && str[i + 1] == '\n') ||
				(str[i] == '\n' && str[i + 1] == '\0'))
		{
			x++;
			i += 2;
		}
		else
			i++;
	}
	return (x);
}
