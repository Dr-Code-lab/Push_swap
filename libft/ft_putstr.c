/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:25:50 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/18 11:57:35 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	size_t	id;

	id = 0;
	if (s != NULL)
	{
		while (s[id] != '\0')
		{
			ft_putchar(s[id]);
			id++;
		}
	}
}