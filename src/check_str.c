/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:38:00 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/23 21:40:16 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

int		check_str(char *arg)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(arg);
	while (i < len)
	{
		if ((arg[i] > '9' || arg[i] < '0') && arg[i] != ' ' && arg[i] != '-')
		{
			ft_putstr("Error\n");
			exit(0);
		}
		i++;
	}
	return (1);
}
