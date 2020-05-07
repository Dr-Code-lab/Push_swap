/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:14:19 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/07 14:09:23 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

static int	get_position(t_var *vari, int i)
{
	int	pos;

	pos = 0;
	while(vari->sorted[pos] != vari->stk_a[i])
		pos++;
	return (pos);
}

void	sign_massive(t_var *vari)
{
	int	i;
	
	i = 0;
	while(i < vari->size_a)
	{
		vari->sis_a[i].n = vari->stk_a[i];
		vari->sis_a[i].up = i;
		vari->sis_a[i].down = vari->size_a - i;
		vari->sis_a[i].pos = get_position(vari, i);
		i++;  
	}
}
