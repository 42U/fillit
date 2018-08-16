/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_which_pc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 21:10:35 by issmith           #+#    #+#             */
/*   Updated: 2018/08/12 16:05:28 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_which_pc(int nb)
{
	if (nb == 0)
		return (ft_piece_zero());
	if (nb == 1)
		return (ft_piece_one());
	if (nb == 2)
		return (ft_piece_two());
	if (nb == 3)
		return (ft_piece_three());
	if (nb == 4)
		return (ft_piece_four());
	if (nb == 5)
		return (ft_piece_five());
	if (nb == 6)
		return (ft_piece_six());
	if (nb == 7)
		return (ft_piece_seven());
	if (nb == 8)
		return (ft_piece_eight());
	if (nb == 9)
		return (ft_piece_nine());
	if (nb == 10)
		return (ft_piece_ten());
	return (0);
}
