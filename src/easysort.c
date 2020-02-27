/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easysort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 16:00:18 by ophuong           #+#    #+#             */
/*   Updated: 2020/02/27 15:34:15 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

static void		a_sort(t_var *vari)
	{
		if (vari->stk_a[0] > vari->stk_a[2] && vari->size_a == 3)
		{
			ra(vari);
			ft_putstr("ra\n");
		}
		if (vari->stk_a[0] > vari->stk_a[1])
		{
			sa(vari);
			ft_putstr("sa\n");
		}
	}
static void		b_sort(t_var *vari)
	{
		if (vari->stk_b[0] < vari->stk_b[2] && vari->size_a == 3)
		{
			rb(vari);
			ft_putstr("rb\n");
		}
		if (vari->stk_b[0] < vari->stk_b[1])
		{
			sb(vari);
			ft_putstr("sb\n");
		}
	}

static void		cut_stk(t_var *vari)
{
	int	c;
	int	s_a;

	c = 0;
	s_a = vari->size_a;
	ft_qsort(vari->sorted, vari->size_a, sizeof(int), ft_compare);
	vari->base_n = vari->sorted[vari->size_a / 2];
	while (c < s_a)
	{
		if (vari->stk_a[0] < vari->base_n)
		{
			pb(vari);
			ft_putstr("pb\n");
		}
		else
		{
			ra(vari);
			ft_putstr("ra\n");
		}
		c++;
	}
	a_sort(vari);
	b_sort(vari);
}

void			easysort(t_var	*vari)
{
	int	c;
	int	s_b;

	c = 0;
	if (vari->size_a == 1)
		return ;
	if (vari->size_a > 3)
	{
		cut_stk(vari);
		s_b = vari->size_b;
		while (c < s_b)
		{
			pa(vari);
			ft_putstr("pa\n");
			c++;
		}
	}
	else
		a_sort(vari);
	/////////////
	int	i = 0;
	while (i < vari->size_a)
	{
		ft_putnbr(vari->stk_a[i]);
		write(1, "\n", 1);
		i++;
	}
/*	i = 0;
	while (i < vari->size_b)
	{
		ft_putnbr(vari->stk_b[i]);
		write(1, "\n", 1);
		i++;
	}
*/	/////////////
	
}
