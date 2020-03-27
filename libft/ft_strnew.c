/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:13:06 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/18 13:02:47 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*fresh;

	if (size > size + 1)
		return (NULL);
	if (!(fresh = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(fresh, '\0', size + 1);
	return (fresh);
}
