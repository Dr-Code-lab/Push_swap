/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  eck_minmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:38:00 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/21 23:23:52 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

void	check_minmax(char *av)
{
	/*//////////
	ft_putstr(av);
	ft_putchar('\n');
	ft_putchar(av[0]);
	ft_putchar(av[1]);
	ft_putchar('\n');
	ft_putnbr(ft_atoi(av));
	ft_putchar('\n');
	*///
	if ((ft_strlen(av) >= 10 && ft_atoi(av) < 0 && av[0] != '-') ||
			(ft_strlen(av) == 11 && ft_atoi(av) >= -1410065407  && av[0] == '-' && av[1] > 1)
			|| ft_strlen(av) > 11)
	{
		write(2, "Error\n", 6);
		exit (0);
	}
}

