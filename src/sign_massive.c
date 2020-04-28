/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:14:19 by ophuong           #+#    #+#             */
/*   Updated: 2020/03/02 13:25:05 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

///////////////////////////////////////////////////////////////////////
void	sign_massive(t_var *vari)
{
	int	i;

	i = 0;
	while(i < vari->size_a)
	{
		vari->sis_a[i].n = vari->stk_a[i];
		vari->sis_a[i].up = i;
		vari->sis_a[i].down = vari->size_a - i;
		i++;  
	}
}
/*
void	sign_massive(int *p, int size, t_num **elem)
{
	int	i;

	if (size > 0)
	{
		if (!(*elem = malloc(sizeof(t_num) * size)))
			return;
	}
	i = 0;
	while(i < size)
	{
		(*elem)[i].n = a[i];
		(*elem)[i].up = i;
		(*elem)[i].down = size - i;
		i++;  
	}
}*/
///////////////////////////////////////////////////////////////////////
