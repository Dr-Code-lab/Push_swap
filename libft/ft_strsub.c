/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:19:49 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/12 12:10:01 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	id;
	char			*fresh;

	id = 0;
	if (s == NULL)
		return (NULL);
	if (!(fresh = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (id < len)
	{
		fresh[id] = s[start + id];
		id++;
	}
	fresh[id] = '\0';
	return (fresh);
}
