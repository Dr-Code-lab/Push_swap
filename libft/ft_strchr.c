/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:30:43 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/18 21:21:06 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	id;

	id = 0;
	while (s[id] != '\0' && s[id] != (char)c)
	{
		id++;
	}
	if (s[id] == (char)c)
		return ((char *)(s + id));
	return (NULL);
}
