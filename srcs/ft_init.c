/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 22:38:33 by issmith           #+#    #+#             */
/*   Updated: 2018/08/19 07:12:17 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** this function takes in a str and sends that str to the ft_check_valid
** making sure the str is almost a tetris pc.
** if the str is valid then a final check to make sure the hashtags are
** connected to form a tetris pc is done and the str for that pc is returned
** in an array, then converted to an alpha array
*/

char	**ft_init(char *str, int x)
{
	int		line;
	int		hash;
	char	**tmp;
	char	**arr;

	line = 0;
	hash = 0;
	if (ft_check_valid(str, line, hash) != 0)
	{
		ft_error_msg(1);
		return (0);
	}
	else
	{
		if (ft_make_tmp(&tmp, str, x, line) != 0)
		{
			ft_error_msg(1);
			return (0);
		}
		ft_g_strs();
		ft_make_alpha(&arr, &tmp, x);
	}
	free(tmp);
	free(str);
	return (arr);
}
