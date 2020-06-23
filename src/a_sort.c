/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 16:00:18 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/23 20:43:16 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

void	choose_way_ss(t_var *vari)
{
	if ((vari->stk_a[0] < vari->stk_a[2] && vari->stk_a[1] > vari->stk_a[2])
			|| (vari->stk_a[1] < vari->stk_a[0]
				&& vari->stk_a[2] > vari->stk_a[0])
			|| (vari->stk_a[2] < vari->stk_a[1]
				&& vari->stk_a[0] > vari->stk_a[1]))
	{
		if (((vari->stk_b[0] > vari->stk_b[2]
						&& vari->stk_b[1] < vari->stk_b[2])
			|| (vari->stk_b[1] > vari->stk_b[0]
				&& vari->stk_b[2] < vari->stk_b[0])
			|| (vari->stk_b[1] > vari->stk_b[0]
				&& vari->stk_b[1] < vari->stk_b[2])) && vari->size_b > 1)
		{
			ss(vari);
			ft_putstr("ss\n");
		}
		else
		{
			sa(vari);
			ft_putstr("sa\n");
		}
	}
}

void	choose_way_rr(t_var *vari)
{
	if (vari->stk_a[0] > vari->stk_a[2] && vari->stk_a[1] < vari->stk_a[2])
	{
		if (vari->stk_a[0] < vari->stk_a[2]
				&& vari->stk_a[1] > vari->stk_a[2])
		{
			rr(vari);
			ft_putstr("rr\n");
		}
		else
		{
			ra(vari);
			ft_putstr("ra\n");
		}
	}
}

void	choose_way_rrr(t_var *vari)
{
	if (vari->stk_a[0] < vari->stk_a[1] && vari->stk_a[0] > vari->stk_a[2])
	{
		if (vari->stk_b[0] > vari->stk_b[1]
				&& vari->stk_b[0] < vari->stk_b[2])
		{
			rrr(vari);
			ft_putstr("rrr\n");
		}
		else
		{
			rra(vari);
			ft_putstr("rra\n");
		}
	}
}

void	a_sort(t_var *vari)
{
	if (vari->size_a == 3)
	{
		choose_way_ss(vari);
		choose_way_rr(vari);
		choose_way_rrr(vari);
	}
	else if (vari->size_a == 2)
	{
		if (vari->stk_a[0] > vari->stk_a[1])
		{
			sa(vari);
			ft_putstr("sa\n");
		}
	}
}
