/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easysort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 16:00:18 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/07 13:03:43 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

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
