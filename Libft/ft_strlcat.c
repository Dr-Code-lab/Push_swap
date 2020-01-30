/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 10:19:20 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/10 18:47:02 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	id;
	size_t	od;
	size_t	len;

	id = 0;
	while (dst[id] != '\0' && id < size)
	{
		id++;
	}
	len = id;
	od = 0;
	if (size == 0)
		return (ft_strlen(src) + len);
	while (src[od] != '\0' && id < size - 1)
	{
		dst[id] = src[od];
		id++;
		od++;
	}
	if (id > size || src[od] == '\0' || id + 1 == size)
		dst[id] = '\0';
	return (ft_strlen(src) + len);
}
