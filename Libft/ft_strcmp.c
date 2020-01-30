/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:34:45 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/09 21:28:45 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t	id;

	id = 0;
	while (s1[id] == s2[id] && s1[id] != '\0' && s2[id] != '\0')
		id++;
	return ((unsigned char)s1[id] - (unsigned char)s2[id]);
}
