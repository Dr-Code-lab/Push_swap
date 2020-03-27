/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:13:41 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/18 12:03:45 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	size_t	id;
	size_t	od;

	id = 0;
	od = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(fresh = (char*)malloc(sizeof(char) *
					(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[id] != '\0')
	{
		fresh[id] = s1[id];
		id++;
	}
	while (s2[od] != '\0')
	{
		fresh[id] = s2[od];
		id++;
		od++;
	}
	fresh[id] = '\0';
	return (fresh);
}
