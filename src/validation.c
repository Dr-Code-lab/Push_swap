/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:38:00 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/23 19:32:37 by Student          ###   ########.fr       */
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
		vari->size_a = ac - 1;
		vari->size_b = 0;
		vari->stk_a = ft_memalloc(sizeof(int) * (vari->size_a));
		vari->stk_b = ft_memalloc(sizeof(int) * (vari->size_a));
		vari->sorted = ft_memalloc(sizeof(int) * (vari->size_a));
		while (o < ac)
		{
			if (check_str(av[o]) == 1)
			{
				check_minmax(av[o]);
				vari->stk_a[i] = ft_atoi(av[o]);
				if (ac > 4)
					vari->sorted[i] = vari->stk_a[i];
				i++;
				o++;
			}
		}
	}
}
