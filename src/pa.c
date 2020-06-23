/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 15:20:12 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/24 13:13:41 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

/*
**	1. Move stack_a down by 1.
**	2. Push stack.b[0] to stack.a[0].
**	3. Move stack.b up by 1.
*/

void	pa(t_var *vari)
{
	int	i;

	i = vari->size_a;
	if (vari->size_b > 0)
	{
		while (i != 0)
		{
			vari->stk_a[i] = vari->stk_a[i - 1];
			i--;
		}
		vari->stk_a[0] = vari->stk_b[0];
		while (i < vari->size_b)
		{
			vari->stk_b[i] = vari->stk_b[i + 1];
			i++;
		}
		vari->size_b -= 1;
		vari->size_a += 1;
	}
}
