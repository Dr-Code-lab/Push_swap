/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 18:29:04 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/18 20:25:19 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	l_n;

	if (*s2 == '\0')
		return ((char *)s1);
	l_n = ft_strlen(s2);
	while (*s1 != '\0' && len-- >= l_n)
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, l_n) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
