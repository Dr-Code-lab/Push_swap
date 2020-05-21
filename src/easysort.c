/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easysort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 16:00:18 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/21 18:56:06 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

static void		cut_sort(t_var *vari)
{
	int	i;

	i = vari->size_a;
	ft_qsort(vari->sorted, vari->size_a, sizeof(int), ft_compare);
	vari->base_n = vari->sorted[vari->size_a / 2];
	while (i--)
	{
		if (vari->stk_a[0] >= vari->base_n)
		{
			ra(vari);
			ft_putstr("ra\n");
		}
		else
		{
			pb(vari);
			ft_putstr("pb\n");
		}
	}
	///////////
	//printf("SIZE_A = %d\nSIZE_B = %d\n", vari->size_a, vari->size_b);
   	/////////////
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
		a_sort(vari);
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
