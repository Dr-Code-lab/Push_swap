/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_sign.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:38:00 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/11 22:18:43 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

void	valid_sign(t_var *vari)
{
	if (vari)
	{
		if (!(vari->sis_a = malloc(sizeof(t_num) * (vari->size_a))))
			return ;
		ft_bzero(vari->sis_a, vari->size_a * sizeof(t_num)); 
		sign_massive(vari);
	}
}
