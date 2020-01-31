/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 17:03:00 by ophuong           #+#    #+#             */
/*   Updated: 2020/01/31 17:18:56 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/os.h"

/*
**	1. The first elementi of stack.a becomes the last one.
**	2. Shift up all elements of stack.a by 1.
*/	

void	ra();
{
	int	i;

	i = 0;
	stack.a[var.size_a] = stack.a[0];
	while (i < var.size_a)
	{
		stack.a[i] = stack.a[i + 1];
		i++;
	}
}
