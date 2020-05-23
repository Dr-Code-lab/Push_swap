/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 15:20:12 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/23 21:44:45 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

/*
**	1. Move stack_b down by 1.
**	2. Push stack.a[0] to stack.b[0].
**	3. Move stack.a up by 1.
*/

void	pb(t_var *vari)
{
	int	i;

	i = vari->size_b;
	if (i != 0)
	{
		while (i > 0)
		{
			vari->stk_b[i] = vari->stk_b[i - 1];
			i--;
		}
	}
	vari->stk_b[0] = vari->stk_a[0];
	while (i < vari->size_a)
	{
		vari->stk_a[i] = vari->stk_a[i + 1];
		i++;
	}
	vari->size_a -= 1;
	vari->size_b += 1;
}
