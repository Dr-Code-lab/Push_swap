/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easysort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 16:00:18 by ophuong           #+#    #+#             */
/*   Updated: 2020/02/18 20:24:26 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

void	easysort(t_var	*vari)
{
	/////////////
	int	i;
	/////////////
	if (vari->stk_a[0] > vari->stk_a[1])
	{
		sa(vari);
		write(1, "sa\n", 3);
	}
	if (vari->stk_a[0] > vari->stk_a[2])
	{
		rra(vari);
		write(1, "rra\n", 4);
	}
	/////////////
	i = 0;
	while (i < 3)
	{
		ft_putnbr(vari->stk_a[i]);
		write(1, "\n", 1);
		i++;
	}
	/////////////
	
}
