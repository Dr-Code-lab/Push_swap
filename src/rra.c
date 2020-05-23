/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 20:32:35 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/23 21:19:39 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

/*
**	1. Shift down all elements of stack.a by 1.
**	2. The last element becomes the first one.
*/

void	rra(t_var *vari)
{
	int	i;
	int	tmp;

	i = vari->size_a;
	tmp = vari->stk_a[i - 1];
	while (i > 0)
	{
		vari->stk_a[i] = vari->stk_a[i - 1];
		i--;
	}
	vari->stk_a[0] = tmp;
}
