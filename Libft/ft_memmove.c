/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 20:26:03 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/18 18:07:04 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*sourc;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst == src)
		return (dst);
	dest = (unsigned char *)dst + (len - 1);
	sourc = (unsigned char *)src + (len - 1);
	if (sourc < dest)
	{
		while (len--)
		{
			*dest = *sourc;
			dest--;
			sourc--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
