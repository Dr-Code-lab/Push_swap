/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_pos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 16:00:18 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/07 15:09:36 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

static int ft_index(t_var *vari, int i)
{
	int	index;

	index = 0;
	while (vari->sis_a[index].n != vari->stk_b[i])
		index++;
	return (index);
}

void		valid_pos(t_var *vari)
{
	int	i;
	int	o;

	i = 0;
	while(i < vari->size_b)
	{
		o = ft_index(vari, i);
		vari->sis_a[o].up = i;
		vari->sis_a[o].down = vari->size_b - i;
		i++;
		/////////////////
		write(1, "a.n:", 4);
		ft_putnbr(vari->sis_a[o].n);
		ft_putchar('	');
		write(1, "a.u:", 4);
		ft_putnbr(vari->sis_a[o].up);
		ft_putchar('	');
		write(1, "a.d:", 4);
		ft_putnbr(vari->sis_a[o].down);
		ft_putchar('	');
		write(1, "a.p:", 4);
		ft_putnbr(vari->sis_a[o].pos);
		ft_putchar('\n');
		/////////////////
	}
}
