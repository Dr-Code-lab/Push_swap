/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:38:00 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/11 22:21:50 by Student          ###   ########.fr       */
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
		if (!(vari->stk_a = (int*)malloc(sizeof(int) * (vari->size_a))) ||
				!(vari->stk_b = (int*)malloc(sizeof(int) * (vari->size_a))) ||
				!(vari->sorted = (int*)malloc(sizeof(int) * (vari->size_a))))
			return ;
		ft_bzero(vari->stk_a, vari->size_a * sizeof(int)); 
		ft_bzero(vari->stk_b, vari->size_a * sizeof(int)); 
		ft_bzero(vari->sorted, vari->size_a * sizeof(int)); 
		while (o < ac)
		{
			vari->stk_a[i] = ft_atoi(av[o]);
			if (ac > 4)
				vari->sorted[i] = vari->stk_a[i];
			i++;
			o++;
		}
	}
}
