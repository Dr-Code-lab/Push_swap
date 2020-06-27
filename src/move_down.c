/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_down.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 16:00:18 by ophuong           #+#    #+#             */
/*   Updated: 2020/06/27 00:13:25 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

static void		one_way_down(t_var *vari, int pos)
{
	int	i;
	int	o;

	i = 0;
	o = 0;
	while (vari->sis_b[pos].n != vari->stk_b[0]
			&& vari->sis_b[pos].steps - vari->sis_b[pos].down > i)
	{
		rrr(vari);
		ft_putstr("rrr\n");
		i++;
	}
	o = i * 2;
	while (vari->sis_b[pos].n != vari->stk_b[0])
	{
		rrb(vari);
		ft_putstr("rrb\n");
		o++;
	}
//	if (!(vari->stk_b[pos] < vari->stk_a[0] && vari->stk_b[pos] > vari->stk_a[vari->size_a - 1]))
	{
		while (vari->sis_b[pos].steps - vari->sis_b[pos].down > i)
		{
			rra(vari);
			ft_putstr("rra\n");
			i++;
		}
	}
}

void			move_down(t_var *vari, int pos)
{
	int	i;

	i = 0;
	if (vari->sis_b[pos].way == 1)
		one_way_down(vari, pos);
	else
	{
		while (vari->sis_b[pos].n != vari->stk_b[0])
		{
			rrb(vari);
			ft_putstr("rrb\n");
		}
		while (vari->sis_b[pos].steps - vari->sis_b[pos].down > i)
		{
			ra(vari);
			ft_putstr("ra\n");
			i++;
		}
	}
}
