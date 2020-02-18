/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:38:00 by ophuong           #+#    #+#             */
/*   Updated: 2020/02/18 17:25:05 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

void	validation(t_var *vari, int ac, char **av)
{
	int	i;
	int	o;

	if (ac && av)
	{
		i = 0;
		o = 1;
		if (!(vari->stk_a = (int*)malloc(sizeof(int) * (ac - 1))) ||
				!(vari->stk_b = (int*)malloc(sizeof(int) * (ac - 1))))
			return ;
		while (o < ac)
		{
			vari->stk_a[i] = ft_atoi(av[o]);
			i++;
			o++;
		}
		vari->size = ac - 1;
		/////////////////
		i = 0;
		while (i < ac - 1)
		{
			ft_putnbr(vari->stk_a[i]);
			write(1, "\n", 1);
			i++;
		}
		/////////////////
	}
}
