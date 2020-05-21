/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 16:00:18 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/21 14:09:02 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

void	a_sort(t_var *vari)
	{
		if (vari->size_a == 3)
		{
		//////
		printf("QQQQQ\n");
		////
			
		/*	if (vari->stk_a[0] > vari->stk_a[2] && vari->stk_a[0] < vari->stk_a[1])
			{
				rra(vari);
				ft_putstr("rra\n");
			}
			if (vari->stk_a[0] > vari->stk_a[2] && vari->stk_a[1] < vari->stk_a[2])
			{
				ra(vari);
				ft_putstr("ra\n");
			}
		*/	if ((vari->stk_a[0] < vari->stk_a[2] && vari->stk_a[1] > vari->stk_a[2])
					|| (vari->stk_a[1] < vari->stk_a[0] && vari->stk_a[2] > vari->stk_a[0])
					|| (vari->stk_a[2] < vari->stk_a[1] && vari->stk_a[0] > vari->stk_a[1]))
			{
				if (((vari->stk_b[0] > vari->stk_b[2] && vari->stk_b[1] < vari->stk_b[2])
					|| (vari->stk_b[1] > vari->stk_b[0] && vari->stk_b[2] < vari->stk_b[0])
					|| (vari->stk_b[1] > vari->stk_b[0] && vari->stk_b[1] < vari->stk_b[2])) && vari->size_b > 1)
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
			if (vari->stk_a[0] > vari->stk_a[2] && vari->stk_a[1] < vari->stk_a[2])
			{
				if (vari->stk_a[0] < vari->stk_a[2] && vari->stk_a[1] > vari->stk_a[2])
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
			if (vari->stk_a[0] < vari->stk_a[1] && vari->stk_a[0] > vari->stk_a[2])
			{
				if (vari->stk_b[0] > vari->stk_b[1] && vari->stk_b[0] < vari->stk_b[2])
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
	else if (vari->size_a == 2)
	{	
		if (vari->stk_a[0] > vari->stk_a[1])
		{
			sa(vari);
			ft_putstr("sa\n");
		}
	}
}

