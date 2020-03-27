/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 18:09:25 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/20 14:57:08 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*tmp;

	tmp = NULL;
	if (lst != NULL && f != NULL)
	{
		while (lst != NULL)
		{
			tmp = lst;
			f(lst);
			lst = (*tmp).next;
		}
	}
}
