/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 17:13:27 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/10 15:56:00 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	id;

	id = 0;
	if (n == 0)
		return (0);
	while (s1[id] == s2[id] && id < n - 1 && s1[id] != '\0' && s2[id] != '\0')
	{
		id++;
	}
	return ((unsigned char)s1[id] - (unsigned char)s2[id]);
}
