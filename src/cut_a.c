/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cut_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:14:19 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/11 22:22:33 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

static void	get_base_n(t_var *vari)
{
	int	*sorted;
	int	i;

	i = 0;
	sorted = ft_memalloc(sizeof(int) * vari->size_a);
	ft_memcpy(sorted, vari->stk_a, sizeof(int) * vari->size_a);
	ft_qsort(vari->sorted, vari->size_a, sizeof(int), ft_compare);
	vari->base_n = vari->stk_a[vari->size_a / 2];
}

void		cut_a(t_var *vari)
{
	int	c;
	int	s_a;

	while (vari->size_a > 3)
	{
		c = 0;
		s_a = vari->size_a;
		while (c < s_a)
		{
			if (vari->stk_a[0] <= vari->base_n)
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
		get_base_n(vari);
	}
	a_sort(vari);
}
