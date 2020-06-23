/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_sign.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:38:00 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/23 21:21:29 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

void	valid_sign(t_var *vari)
{
	if (vari)
	{
		vari->min_n = vari->sorted[0];
		vari->max_n = vari->sorted[vari->size_a - 1];
		{
			if (!(vari->sis_a = malloc(sizeof(t_num) * (vari->size_a))))
				return ;
			ft_bzero(vari->sis_a, vari->size_a * sizeof(t_num));
			if (!(vari->sis_b = malloc(sizeof(t_num) * (vari->size_a))))
				return ;
			ft_bzero(vari->sis_b, vari->size_a * sizeof(t_num));
			sign_massive(vari);
		}
	}
}
