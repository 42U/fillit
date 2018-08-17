/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 06:20:18 by issmith           #+#    #+#             */
/*   Updated: 2018/08/03 00:56:42 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_check_valid(char **str)
{
	int		i;
	int		c;
	int		line;
	int		hash;

	i = 0;
	line = 0;
	c = 0;
	hash = 0;
//	ft_putstr(*str);
	while (str[0][i] != '\0')
	{
		while ((str[0][i] == '.' || str[0][i] == '#') && str[0][i] != '\n')
		{
			c++;
			if (str[0][i] == '#')
				hash++;
			i++;
		}
		if (str[0][i] == '\n')
		{
			line++;
			if (c != 4)
				return (-2);
			if (str[0][i + 1] == '\n' && str[0][i + 2] != '.' && str[0][i + 2] != '#')
				return (-3);
			if (str[0][i + 1] != '\n' && str[0][i + 1] != '.' && str[0][i + 1]
					!= '#' && str[0][i + 1] != '\0')
				return (-4);
			if (str[0][i + 1] == '\0' && line != 4)
				return (-7);
			if (line == 4 && hash != 4)
				return (-6);
			if (line > 4)
				return (-1);
			if (str[0][i + 1] == '\n')
			{
				if (hash != 4)
					return (-5);
				hash = 0;
				line = 0;
				i += 1;
			}
			c = 0;
		}
		i++;
		if (str[0][i] == '\0')
			return (0);	
	}
	return (-9);
}
