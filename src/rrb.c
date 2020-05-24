/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 20:32:35 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/24 13:34:05 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

/*
**	1. Shift down all elements of stack.b by 1.
**	2. The last element becomes the first one.
*/

void	rrb(t_var *vari)
{
	int	i;
	int	tmp;

	i = vari->size_b;
	tmp = vari->stk_b[i - 1];
	if (vari->size_b > 1)
	{
		while (i > 0)
		{
			vari->stk_b[i] = vari->stk_b[i - 1];
			i--;
		}
		vari->stk_b[0] = tmp;
	}
}
