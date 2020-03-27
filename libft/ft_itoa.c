/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 21:39:49 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/18 18:21:36 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	f_lenum(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (i + 1);
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int				len;
	char			*fresh;
	unsigned int	nb;

	nb = n;
	len = f_lenum(n);
	if (n < 0)
	{
		if (!(fresh = ft_strnew(len + 1)))
			return (NULL);
		fresh[0] = '-';
		len = len + 1;
		nb = -n;
	}
	else if (!(fresh = ft_strnew(len)))
		return (NULL);
	fresh[len] = '\0';
	while ((len != 0 && fresh[0] != '-') || (fresh[0] == '-' && nb != 0))
	{
		len--;
		fresh[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (fresh);
}
