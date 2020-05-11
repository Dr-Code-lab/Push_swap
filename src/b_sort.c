/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 16:00:18 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/11 22:13:29 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

void	b_sort(t_var *vari)
	{
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
	}

