/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 12:51:43 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/17 11:48:20 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	f_cutdelim(char const *s, char c, size_t od)
{
	while (s[od] == c)
	{
		od++;
	}
	return (od);
}

static size_t	f_words(const char *s, char c)
{
	size_t	id;
	size_t	n;

	id = 0;
	n = 0;
	while (s[id] != '\0')
	{
		if (s[id] != c && (s[id + 1] == c || s[id + 1] == '\0'))
		{
			n++;
		}
		id++;
	}
	return (n);
}

static char		*f_new(const char *str, char c)
{
	size_t	i;
	size_t	xd;
	char	*new;

	i = 0;
	xd = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	new = ft_strnew(i + 1);
	if (new == NULL)
		return (NULL);
	while (xd < i)
	{
		new[xd] = str[xd];
		xd++;
	}
	return (new);
}

static int		f_fresh(char const *s, char c, size_t id, char **fresh)
{
	size_t	od;

	od = 0;
	while (s[od] != '\0')
	{
		if (s[od] == c)
			od = f_cutdelim(s, c, od);
		else if (s[od] != c)
		{
			fresh[id] = f_new(s + od, c);
			if (fresh[id] == NULL)
			{
				while (id > 0)
				{
					ft_strdel(&fresh[id]);
					id--;
				}
				ft_strdel(&fresh[id]);
				return (0);
			}
			od = od + ft_strlen(fresh[id]);
			id++;
		}
	}
	return (id);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**fresh;
	size_t	id;
	size_t	od;

	id = 0;
	od = 0;
	fresh = 0;
	if (s == NULL)
		return (NULL);
	if (!(fresh = (char**)malloc(sizeof(char*) * (f_words(s, c) + 1))))
		return (NULL);
	id = f_fresh(s, c, id, fresh);
	fresh[id] = 0;
	if (id == 0)
		ft_strdel(fresh);
	return (fresh);
}
