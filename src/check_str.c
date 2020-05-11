/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:38:00 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/11 22:41:00 by Student          ###   ########.fr       */
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
		if ((arg[i] > '9' || arg[i] < '0') && arg[i] != ' ')
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	return (1);
}
