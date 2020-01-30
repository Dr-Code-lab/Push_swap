/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 17:23:08 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/17 12:11:59 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	id;

	id = 0;
	while (id < n && ((unsigned char *)src)[id] != (unsigned char)c)
	{
		((unsigned char *)dst)[id] = ((unsigned char *)src)[id];
		id++;
	}
	if (id == n)
		return (NULL);
	else if (((unsigned char *)src)[id] == (unsigned char)c)
		((unsigned char *)dst)[id] = ((unsigned char *)src)[id];
	return ((void *)dst + id + 1);
}
