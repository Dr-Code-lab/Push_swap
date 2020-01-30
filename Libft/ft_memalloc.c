/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:37:22 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/09 15:31:50 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*fresh;

	fresh = (void*)malloc(sizeof(fresh) * size);
	if (fresh == NULL)
		return (NULL);
	ft_bzero(fresh, size);
	return (fresh);
}
