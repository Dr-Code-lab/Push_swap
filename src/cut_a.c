/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cut_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:14:19 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/23 21:39:35 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

void		cut_a(t_var *vari)
{
	while (vari->size_a > 3)
	{
		if (vari->stk_a[0] != vari->base_n && vari->stk_a[0] != vari->min_n
				&& vari->stk_a[0] != vari->max_n)
		{
			pb(vari);
			ft_putstr("pb\n");
		}
		else
		{
			ra(vari);
			ft_putstr("ra\n");
		}
	}
	a_sort(vari);
}
