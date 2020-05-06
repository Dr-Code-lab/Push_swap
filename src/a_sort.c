/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 16:00:18 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/07 01:12:41 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

void	a_sort(t_var *vari)
	{
		//////
		printf("size_a= %d\na[0]= %d\na[1]= %d\na[2]= %d\n",
				vari->size_a, vari->stk_a[0], vari->stk_a[1], vari->stk_a[2]);
		//////
		if (vari->size_a == 3)
		{
			
			if (vari->stk_a[0] > vari->stk_a[2])
			{
				ra(vari);
				ft_putstr("ra\n");
			}
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
		}
		else
			if (vari->size_a == 2 && vari->stk_a[0] > vari->stk_a[1])
			{
				sa(vari);
				ft_putstr("sa\n");
			}
		//////
		ft_putstr("\nOK_a\n");
		//////
	}

