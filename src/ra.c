/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 17:03:00 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/23 21:42:45 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

/*
**	1. The first elementi of stack.a becomes the last one.
**	2. Shift up all elements of stack.a by 1.
*/

void	ra(t_var *vari)
{
	int	i;

	i = 0;
	vari->stk_a[vari->size_a] = vari->stk_a[0];
	while (i <= vari->size_a)
	{
		vari->stk_a[i] = vari->stk_a[i + 1];
		i++;
	}
}
