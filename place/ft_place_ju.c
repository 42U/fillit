/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_ju.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 06:47:24 by issmith           #+#    #+#             */
/*   Updated: 2018/08/09 06:48:59 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_place_ju(char c)
{
	g_square[g_i][g_j] = c;
	g_square[g_i][g_j + 1] = c;
	g_square[g_i + 1][g_j] = c;
	g_square[g_i + 2][g_j] = c;
}