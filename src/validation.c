/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:38:00 by ophuong           #+#    #+#             */
/*   Updated: 2020/02/17 16:03:22 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ps.h"

void	validation(int ac, char **av)
{
	int	i;
	int	o;

	if (ac && av)
	{
		i = 0;
		o = 1;
		if (!(stk_a = (int*)malloc(sizeof(int) * (ac - 1))) ||
				!(stk_b = (int*)malloc(sizeof(int) * (ac - 1))))
			return ;
		while (o < ac)
		{
			stk_a[i] = ft_atoi(av[o]);
			i++;
			o++;
		}
		i = 0;
		while (i < ac - 1)
		{
			ft_putnbr(stk_a[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}
