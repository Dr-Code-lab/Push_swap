/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 16:00:18 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/07 01:00:44 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

void	b_sort(t_var *vari)
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

