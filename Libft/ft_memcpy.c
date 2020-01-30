/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 16:27:55 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/18 17:08:06 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	id;

	id = 0;
	if (dst == NULL && src == NULL)
		return (0);
	while (id < n)
	{
		((unsigned char *)dst)[id] = ((unsigned char *)src)[id];
		id++;
	}
	return (dst);
}
