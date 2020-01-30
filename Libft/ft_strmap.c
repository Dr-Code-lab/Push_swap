/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 10:43:08 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/18 13:19:57 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	n;
	size_t	id;
	char	*fresh;

	n = 0;
	id = 0;
	if (!(s == NULL) && !(f == NULL))
	{
		n = ft_strlen(s);
		if (!(fresh = (char*)malloc(sizeof(char) * n + 1)))
			return (NULL);
		while (s[id] != '\0')
		{
			fresh[id] = f(s[id]);
			id++;
		}
		fresh[id] = '\0';
		return (fresh);
	}
	return (NULL);
}
