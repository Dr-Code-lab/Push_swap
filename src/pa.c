/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 15:20:12 by ophuong           #+#    #+#             */
/*   Updated: 2020/02/18 11:06:44 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ps.h"

/*
**	1. Move stack_a down by 1.
**	2. Push stack.b[0] to stack.a[0].
**	3. Move stack.b up by 1.
*/

void	pa()
{
	int	i;

	while(--i)
	{
		stack.a[i + 1] = stack.a[i];
	}
	stack.a[0] = stack.b[0];
	i = var.size_b;
	while (--i)
	{
		stack.b[i - 1] = stack.b[i];
	}
	var.size_b -= 1;
	var.size_a += 1;
}
	
