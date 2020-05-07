/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:14:19 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/07 13:48:08 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

void	cut_a(t_var *vari)
{
	int	c;
	int	s_a;

	while (vari->size_a > 3)
	{
		c = 0;
		s_a = vari->size_a;
		//////////////////
		ft_putnbr(vari->base_n);
		ft_putchar('	');
		//////////////////
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
		//////////////////
		ft_putnbr(vari->size_a);
		ft_putchar('	');
		//////////////////
		vari->base_n = vari->stk_a[vari->size_a / 2];
	}
	a_sort(vari);
}
