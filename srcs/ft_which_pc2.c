/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_which_pc2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 21:19:40 by issmith           #+#    #+#             */
/*   Updated: 2018/08/18 01:26:54 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_which_pc2(int nb, int i, int j)
{
	if (nb == 11)
		return (ft_piece_elev(i, j));
	if (nb == 12)
		return (ft_piece_twel(i, j));
	if (nb == 13)
		return (ft_piece_thir(i, j));
	if (nb == 14)
		return (ft_piece_fote(i, j));
	if (nb == 15)
		return (ft_piece_fift(i, j));
	if (nb == 16)
		return (ft_piece_sixt(i, j));
	if (nb == 17)
		return (ft_piece_sevt(i, j));
	if (nb == 18)
		return (ft_piece_eitt(i, j));
	return (0);
}
