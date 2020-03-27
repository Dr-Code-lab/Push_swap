/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 14:44:42 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/18 16:43:03 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*dst;

	dst = s;
	while (n--)
	{
		if (*dst == (unsigned char)c)
		{
			return ((void*)dst);
		}
		dst++;
	}
	return (0);
}
