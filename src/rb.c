/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 17:03:00 by ophuong           #+#    #+#             */
/*   Updated: 2020/01/31 17:20:00 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/os.h"

/*
**	1. The first elementi of stack.b becomes the last one.
**	2. Shift up all elements of stack.b by 1.
*/	

void	rb();
{
	int	i;

	i = 0;
	stack.b[var.size_b] = stack.b[0];
	while (i < var.size_b)
	{
		stack.b[i] = stack.b[i + 1];
		i++;
	}
}
