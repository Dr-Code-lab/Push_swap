/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:38:00 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/21 23:24:38 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

/*void	check_minmax(char *av)
{
	///////////
	ft_putstr(av);
	ft_putchar('\n');
	ft_putchar(av[0]);
	ft_putchar(av[1]);
	ft_putchar('\n');
	ft_putnbr(ft_atoi(av));
	ft_putchar('\n');
	///
	if ((ft_strlen(av) >= 10 && ft_atoi(av) < 0 && av[0] != '-') ||
			(ft_strlen(av) == 11 && ft_atoi(av) >= -1410065407  && av[0] == '-' && av[1] > 1)
			|| ft_strlen(av) > 11)
	{
		write(2, "Error\n", 6);
		exit (0);
	}
}
*/////
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
