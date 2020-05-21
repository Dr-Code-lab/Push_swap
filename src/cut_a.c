/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cut_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:14:19 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/21 16:12:44 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

/*static void	get_base_n(t_var *vari)
{
	int	*sorted;
	int	i;

	i = 0;
	if (vari->size_a > 3)
	{
		sorted = ft_memalloc(sizeof(int) * vari->size_a);
		ft_memcpy(sorted, vari->stk_a, sizeof(int) * vari->size_a);
		ft_qsort(vari->sorted, vari->size_a, sizeof(int), ft_compare);
		vari->base_n = sorted[vari->size_a / 2];
		free(sorted);
	}
}
*/
void		cut_a(t_var *vari)
{
	while (vari->size_a > 3)
	{
		if (vari->stk_a[0] != vari->base_n && vari->stk_a[0] != vari->min_n && vari->stk_a[0] != vari->max_n)
		{
			pb(vari);
			ft_putstr("pb\n");
		}
		else
		{
			ra(vari);
			ft_putstr("ra\n");
		}
		//get_base_n(vari);
	}
	a_sort(vari);
	///////////////
	//ft_putstr("CUT_A - OK\n");
	//////////////
}
