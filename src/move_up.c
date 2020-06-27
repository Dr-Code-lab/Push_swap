/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_up.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 16:00:18 by ophuong           #+#    #+#             */
/*   Updated: 2020/06/27 00:13:44 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

static void	one_way_up(t_var *vari, int pos)
{
	int	i;
	int	o;

	i = 0;
	o = 0;
	while (vari->sis_b[pos].n != vari->stk_b[0]
			&& vari->sis_b[pos].steps - vari->sis_b[pos].up > i)
	{
		rr(vari);
		ft_putstr("rr\n");
		i++;
	}
	o = i * 2;
	while (vari->sis_b[pos].n != vari->stk_b[0])
	{
		rb(vari);
		ft_putstr("rb\n");
		o++;
	}
//	if (vari->stk_b[pos] > vari->stk_a[0] || vari->stk_b[pos] < vari->stk_a[vari->size_a - 1])
	{
		while (vari->sis_b[pos].steps - o > 0)
		{
			ra(vari);
			ft_putstr("ra\n");
			o++;
		}
	}
}

void		move_up(t_var *vari, int pos)
{
	int	i;

	i = 0;
	if (vari->sis_b[pos].way == 1)
		one_way_up(vari, pos);
	else
	{
		while (vari->sis_b[pos].n != vari->stk_b[0])
		{
			rb(vari);
			ft_putstr("rb\n");
		}
		while (vari->sis_b[pos].steps - vari->sis_b[pos].up > i)
		{
			rra(vari);
			ft_putstr("rra\n");
			i++;
		}
	}
}
