/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 11:36:04 by ophuong           #+#    #+#             */
/*   Updated: 2020/02/26 10:48:05 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(void *a, void *b, size_t size)
{
	char	swap;
	size_t	i;

	i = -1;
	while (++i < size)
	{
		swap = ((char*)a)[i];
		((char*)a)[i] = ((char*)b)[i];
		((char*)b)[i] = swap;
	}
}