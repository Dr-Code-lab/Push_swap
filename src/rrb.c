/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 20:32:35 by ophuong           #+#    #+#             */
/*   Updated: 2020/01/31 20:50:32 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ps.h"i

/*
**	1. Shift down all elements of stack.b by 1.
**	2. The last element becomes the first one.
*/

void	rrb()
{
	int	i;

	i = var.size_b;
	while(i--)
	{
		stack.b[i] = stack[i - 1];
	}
	stack.b[0] = stack.b[var.size_b];
}
