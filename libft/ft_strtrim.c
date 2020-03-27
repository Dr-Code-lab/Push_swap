/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:31:03 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/18 13:28:19 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		f_cutstart(const char *s, unsigned long id)
{
	while (ft_isspace(s[id]) == 1 && s[id] != '\0')
		id++;
	return (id);
}

static int		f_cutend(const char *s)
{
	unsigned int	len;

	len = ft_strlen(s);
	if (len == 0)
		return (1);
	while (ft_isspace(s[len]) == 1 || s[len] == '\0')
	{
		len--;
		if (len == 0)
			break ;
	}
	return (len);
}

static char		*f_trim(const char *s, unsigned long id, unsigned long len)
{
	char			*fresh;
	unsigned long	od;

	od = 0;
	fresh = ft_strnew((len + 1 - id));
	if (!fresh)
		return (NULL);
	while (id < len + 1)
	{
		fresh[od] = s[id];
		id++;
		od++;
	}
	fresh[od] = '\0';
	return (fresh);
}

char			*ft_strtrim(char const *s)
{
	char			*fresh;
	unsigned long	id;
	unsigned long	len;

	id = 0;
	len = 0;
	fresh = NULL;
	if (s == NULL)
		return (NULL);
	len = f_cutend(s);
	id = f_cutstart(s, id);
	if (len < id)
		len = id;
	fresh = f_trim(s, id, len);
	return (fresh);
}
