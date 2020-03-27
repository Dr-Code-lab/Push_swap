/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:48:46 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/18 21:31:23 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	long int	id;
	long int	xd;

	id = 0;
	xd = -1;
	while (s[id])
	{
		if (s[id] == (char)c)
			xd = id;
		id++;
	}
	if (xd != -1)
		return ((char *)s + xd);
	else if ((char)c == '\0')
		return ((char *)s + id);
	return (NULL);
}
