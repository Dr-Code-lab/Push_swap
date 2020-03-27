/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 17:01:35 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/09 17:10:39 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	id;

	id = 0;
	while (id < len && src[id] != '\0')
	{
		dst[id] = src[id];
		id++;
	}
	while (id < len)
	{
		dst[id] = '\0';
		id++;
	}
	return (dst);
}
