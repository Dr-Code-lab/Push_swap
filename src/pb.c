/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 15:20:12 by ophuong           #+#    #+#             */
/*   Updated: 2020/01/31 17:23:12 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ps.h"

/*
**	1. Move stack.b down by 1.
**	2. Push stack.a[0] to stack.b[0].
**	3. Move stack.a up by 1.
*/

void	pb()
{
	int	i;

	i = var.size_b;
	while(--i)
	{
		stack.b[i + 1] = stack.b[i];
	}
	stack.b[0] = stack.a[0];
	i = var.size_a;
	while (--i)
	{
		stack.a[i - 1] = stack.a[i];
	}
	var.size_b += 1;
	var.size_a -= 1;
}
	
