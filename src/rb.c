/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 17:03:00 by ophuong           #+#    #+#             */
/*   Updated: 2020/02/27 10:54:52 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

/*
**	1. The first element of stack.b becomes the last one.
**	2. Shift up all elements of stack.b by 1.
*/	

void	rb(t_var *vari)
{
	int	i;

	i = 0;
	vari->stk_b[vari->size_b] = vari->stk_b[0];
	while (i <= vari->size_b)
	{
		vari->stk_b[i] = vari->stk_b[i + 1];
		i++;
	}
}
