/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_pos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 16:00:18 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/11 22:18:09 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

static int ft_index(t_var *vari, int i)
{
	int	index;

	index = 0;
	while (vari->sis_a[index].n != vari->stk_b[i])
		index++;
	return (index);
}

void		valid_pos(t_var *vari)
{
	int	i;
	int	o;

	i = 0;
	while(i < vari->size_b)
	{
		o = ft_index(vari, i);
		vari->sis_a[o].up = i;
		vari->sis_a[o].down = vari->size_b - i;
		i++;
	}
}
