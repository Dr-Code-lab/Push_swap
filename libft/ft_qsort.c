/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:49:23 by ophuong           #+#    #+#             */
/*   Updated: 2020/02/26 16:56:58 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_qsort(void *base, size_t nel, size_t width,
		int (*compar)(const void *, const void *))
{
	size_t		l;
	size_t		r;
	char		piv[width];

	l = 0;
	r = nel - 1;
	if (nel < 2)
		return ;
	ft_memcpy(piv, &(((char*)base)[width]), width);
	while (l <= r)
	{
		while (compar(&((char*)base)[l * width], piv) < 0)
			l++;
		while (compar(&((char*)base)[r * width], piv) > 0)
			r--;
		if (l <= r)
			ft_swap(&((char*)base)[l++ * width],
					&((char*)base)[r-- * width], width);
	}
	if (r > 0)
		ft_qsort(base, r + 1, width, ft_compare);
	if (l < nel)
		ft_qsort(&((char*)base)[l * width], nel - l, width, ft_compare);
}
