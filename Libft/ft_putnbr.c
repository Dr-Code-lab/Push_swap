/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:47:41 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/11 18:22:39 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long int	i;

	if (n < 0)
	{
		ft_putchar('-');
		i = (long int)n * -1;
	}
	else
		i = n;
	if (i / 10 != 0)
		ft_putnbr(i / 10);
	ft_putchar(i % 10 + '0');
}
