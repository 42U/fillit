/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 06:20:18 by issmith           #+#    #+#             */
/*   Updated: 2018/08/19 15:29:03 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ln_chk(char *str)
{
	int		line;
	int		i;
	int		k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[0] != '.' && str[0] != '#')
			return (-1);
		while (str[i] == '.' && str[i] == '#')
			i++;
		if (str[i] == '\n')
			line++;
		if (k == 19 && line != 4)
			return (-1);
		if (k == 19 && line == 4)
			line = 0;
		i++;
		k++;
	}
	return (0);
}

int		ft_ht_chk(char *str, int hash)
{
	int i;
	int k;

	i = 0;
	k = 0;
	hash = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
			hash++;
		if (k == 20 && hash != 4)
			return (-1);
		if (k == 20 && hash == 4)
		{
			k = 0;
			hash = 0;
		}
		i++;
		k++;
	}
	ft_ln_chk(str);
	return (0);
}

int		ft_check_valid(char *str, int line, int hash)
{
	int		k;
	int		i;
	char	buf[21];

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		while (k <= 20)
			buf[k++] = str[i++];
		buf[k] = '\0';
		if (k == 21)
		{
			if (ft_ht_chk(buf, hash) != 0)
				return (-1);
			k = 0;
		}
	}
	line = 0;
	return (0);
}
