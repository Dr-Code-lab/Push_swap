/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 20:32:35 by ophuong           #+#    #+#             */
/*   Updated: 2020/01/31 20:49:08 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ps.h"i

/*
**	1. Shift down all elements of stack.a by 1.
**	2. The last element becomes the first one.
*/

void	rra()
{
	int	i;

	i = var.size_a;
	while(i--)
	{
		stack.a[i] = stack[i - 1];
	}
	stack.a[0] = stack.a[var.size_a];
}
