/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 17:28:04 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/20 13:18:10 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		cut_space(const char *str)
{
	size_t	id;

	id = 0;
	while (str[id] == ' ' || str[id] == '\r' || str[id] == '\v' ||
			str[id] == '\f' || str[id] == '\n' || str[id] == '\t')
	{
		id++;
	}
	return (id);
}

static int			f_result(size_t count, int sign, size_t n)
{
	if (count > 19)
		return (sign == -1 ? 0 : -1);
	if (n > 9223372036854775807)
		return (sign == -1 ? 0 : -1);
	return ((int)n * sign);
}

int					ft_atoi(const char *str)
{
	size_t	id;
	size_t	n;
	size_t	count;
	int		sign;

	count = 0;
	id = cut_space(str);
	n = 0;
	sign = 1;
	if (str[id] == '-')
	{
		sign = -sign;
		id++;
	}
	else if (str[id] == '+')
		id++;
	while (str[id] >= '0' && str[id] <= '9')
	{
		n = n * 10 + (str[id] - '0');
		id++;
		count++;
	}
	return (f_result(count, sign, n));
}
