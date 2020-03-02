/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 12:53:46 by ophuong           #+#    #+#             */
/*   Updated: 2020/02/28 15:24:24 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

void	move(t_var	*vari)
{
	int	i;
	int	c;

	c = vari->size_a;
	i = 0;
	if (c < 2 || !(vari->stk_a))
		return ;
	while (i <= c)
	{
		if (vari->size_b < 2)
		{
			if (vari->stk_a[0] > vari->stk_a[1] && vari->size_a > 1)
			{
				sa(vari);
				ft_putstr("sa");
			}
			if (vari->stk_a[0] < vari->base_n)
			{
				pb(vari);
				ft_putstr("pb");
			}
			else if (vari->stk_a[0] >= vari->base_n && vari->size_a > 1)
			{
				ra(vari);
				ft_putstr("ra");
			}
		}
		else
		{
			if (vari->stk_a[0] > vari->stk_a[1] && vari->stk_b[0] < vari->stk_b[1]
					&& vari->size_a)
			{
				ss(vari);
				ft_putstr("ss");
			}
			else if (vari->stk_b[0] < vari->stk_b[1])
			{
				sb(vari);
				ft_putstr("sb");
			}
			else if (vari->stk_a[0] > vari->stk_a[1] && vari->size_a > 1)
			{
				sa(vari);
				ft_putstr("sa");
			}
			if (vari->stk_a[0] < vari->base_n)
			{
				pb(vari);
				ft_putstr("pb");
			}
			else if (vari->stk_a[0] >= vari->base_n && vari->size_a > 1)
			{
				ra(vari);
				ft_putstr("ra");
			}
			if (vari->size_b > 2)
			{
				if ((vari->stk_a[0] > vari->stk_a[vari->size_a - 1] && vari->size_a > 1)
						&& vari->stk_b[0] < vari->stk_b[vari->size_b - 1])
				{
					rr(vari);
					ft_putstr("rr");
				}
				else if (vari->stk_a[0] > vari->stk_a[vari->size_a - 1] && vari->size_a > 1)
				{
					ra(vari);
					ft_putstr("ra");
				}
				else if (vari->stk_b[0] < vari->stk_b[vari->size_b - 1])
				{
					rb(vari);
					ft_putstr("rb");
				}
			}
		}
		i++;
	}
}
