/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_which_pc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 21:10:35 by issmith           #+#    #+#             */
/*   Updated: 2018/08/18 01:26:02 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_which_pc(int nb, int i, int j)
{
	if (nb == 0)
		return (ft_piece_zero(i, j));
	if (nb == 1)
		return (ft_piece_one(i, j));
	if (nb == 2)
		return (ft_piece_two(i, j));
	if (nb == 3)
		return (ft_piece_three(i, j));
	if (nb == 4)
		return (ft_piece_four(i, j));
	if (nb == 5)
		return (ft_piece_five(i, j));
	if (nb == 6)
		return (ft_piece_six(i, j));
	if (nb == 7)
		return (ft_piece_seven(i, j));
	if (nb == 8)
		return (ft_piece_eight(i, j));
	if (nb == 9)
		return (ft_piece_nine(i, j));
	if (nb == 10)
		return (ft_piece_ten(i, j));
	return (0);
}
