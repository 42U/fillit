/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_need_rm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 00:38:58 by issmith           #+#    #+#             */
/*   Updated: 2018/08/19 04:06:55 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_need_rm(void)
{
	if (g_flag == 0)
		ft_create_square(g_base);
	else if (g_flag > 0)
	{
		free(g_square);
		ft_create_square(g_base);
	}
}
