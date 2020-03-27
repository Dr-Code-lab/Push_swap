/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:27:30 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/18 21:21:58 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	id;

	id = 0;
	while (src[id] != '\0')
	{
		dst[id] = src[id];
		id++;
	}
	dst[id] = src[id];
	return (dst);
}
