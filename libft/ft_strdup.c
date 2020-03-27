/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:57:37 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/12 17:48:51 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned long	id;
	char			*dst;

	id = 0;
	if (!(dst = (char*)malloc(sizeof(char) * ft_strlen(s1) + 1)))
		return (NULL);
	while (s1[id] != '\0')
	{
		dst[id] = s1[id];
		id++;
	}
	dst[id] = '\0';
	return (dst);
}
