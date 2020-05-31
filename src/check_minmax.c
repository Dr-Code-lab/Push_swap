/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_minmax.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:38:00 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/31 19:49:37 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

static void	check_av_str(char *arg)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(arg);
	while (i < len)
	{
		if ((arg[i] > '9' || arg[i] < '0')
				&& !(arg[0] == '-' && arg[1] != '-'))
		{
			write(2, "Error\n", 6);
			exit(0);
		}
		i++;
	}
}

void		check_minmax(char *av)
{
	if ((ft_strlen(av) >= 10 && ft_atoi(av) < 0 && av[0] != '-') ||
			(ft_strlen(av) == 11 && ft_atoi(av) >= -1410065407
			&& av[0] == '-' && av[1] > 1) || ft_strlen(av) > 11)
	{
		write(2, "Error\n", 6);
		exit(0);
	}
	if ((av[0] == '-' && ft_strlen(av) == 1) || av[0] == '\0')
	{
		write(2, "Error\n", 6);
		exit(0);
	}
	check_av_str(av);
}
