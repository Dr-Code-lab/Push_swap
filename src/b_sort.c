/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 16:00:18 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/23 21:31:49 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

static void	choose_move(t_var *vari)
{
	if (((vari->stk_b[0] > vari->stk_b[2]
					&& vari->stk_b[1] < vari->stk_b[2])
			|| (vari->stk_b[1] > vari->stk_b[0]
				&& vari->stk_b[2] < vari->stk_b[0])
			|| (vari->stk_b[1] > vari->stk_b[0]
				&& vari->stk_b[1] < vari->stk_b[2])) && vari->size_b > 1)
	{
		sb(vari);
		ft_putstr("sb\n");
	}
	if (vari->stk_b[0] < vari->stk_b[2] && vari->stk_b[1] > vari->stk_b[2])
	{
		rb(vari);
		ft_putstr("rb\n");
	}
	if (vari->stk_b[1] < vari->stk_b[0] && vari->stk_b[2] > vari->stk_b[0])
	{
		rrb(vari);
		ft_putstr("rrb\n");
	}
}

void		b_sort(t_var *vari)
{
	if (vari->size_b == 3)
		choose_move(vari);
	else if (vari->size_b == 2)
	{
		if (vari->stk_b[0] < vari->stk_b[1])
		{
			sb(vari);
			ft_putstr("sb\n");
		}
	}
}
