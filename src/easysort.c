/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easysort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 16:00:18 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/07 00:12:14 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

static void		a_sort(t_var *vari)
	{
		//////
		printf("size_a= %d\na[0]= %d\na[1]= %d\na[2]= %d\n",
				vari->size_a, vari->stk_a[0], vari->stk_a[1], vari->stk_a[2]);
		//////
		if (vari->size_a == 3)
		{
			
			if (vari->stk_a[0] > vari->stk_a[2])
			{
				rra(vari);
				ft_putstr("rra\n");
			}
			if (vari->stk_a[0] > vari->stk_a[1] ||
					(vari->stk_a[0] < vari->stk_a[1] && vari->stk_a[1] > vari->stk_a[2]))
			{
				sa(vari);
				ft_putstr("sa\n");
			}
			if (vari->stk_a[0] > vari->stk_a[2])
			{
				ra(vari);
				ft_putstr("ra\n");
			}
		}
		else
			{
				sa(vari);
				ft_putstr("sa\n");
			}
		//////
		ft_putstr("\nOK_a\n");
		//////
	}

static void		b_sort(t_var *vari)
	{
		//////
		printf("size_b= %d\nb[0]= %d\nb[1]= %d\nb[2]= %d\n",
				vari->size_b, vari->stk_b[0], vari->stk_b[1], vari->stk_b[2]);
		//////
		if (vari->size_b == 3)
		{
			if (vari->stk_b[2] > vari->stk_b[0] && vari->stk_b[0] < vari->stk_b[1])
			{
				rrb(vari);
				ft_putstr("rrb\n");
			}
			if (vari->stk_b[2] > vari->stk_b[0] && vari->stk_b[2] > vari->stk_b[1])
			{
				rrb(vari);
				ft_putstr("rrb\n");
			}
			if(vari->stk_b[0] > vari->stk_b[2] && vari->stk_b[0]  > vari->stk_b[1])
			{
				pa(vari);
				ft_putstr("pa\n");
			}
		}
		if (vari->stk_b[0] < vari->stk_b[1])
		{
			sb(vari);
			ft_putstr("sb\n");
		}
		//////
		ft_putstr("\nOK_b\n");
		//////
	}

static void		cut_sort(t_var *vari)
{
	ft_qsort(vari->sorted, vari->size_a, sizeof(int), ft_compare);
	vari->base_n = vari->sorted[vari->size_a / 2];
	cut_a(vari);
	a_sort(vari);
	b_sort(vari);
}

void			easysort(t_var	*vari)
{
	int	c;
	int	s_b;

	if (vari->size_a <= 1)
		return ;
	if (vari->size_a > 3)
	{
		c = 0;
		cut_sort(vari);
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
}
