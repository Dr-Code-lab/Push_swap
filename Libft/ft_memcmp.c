/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:26:01 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/10 15:30:17 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	id;

	id = 0;
	if (n == 0)
		return (0);
	while (id < (n - 1) &&
			((unsigned char *)s1)[id] == ((unsigned char *)s2)[id])
		id++;
	return (((unsigned char *)s1)[id] - ((unsigned char *)s2)[id]);
}
