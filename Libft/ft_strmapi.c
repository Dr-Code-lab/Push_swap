/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:52:14 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/18 13:22:21 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	id;
	char	*fresh;

	id = 0;
	if (!(s == NULL) && !(f == NULL))
	{
		if (!(fresh = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
			return (NULL);
		while (s[id] != '\0')
		{
			fresh[id] = f(id, s[id]);
			id++;
		}
		fresh[id] = '\0';
		return (fresh);
	}
	return (NULL);
}
