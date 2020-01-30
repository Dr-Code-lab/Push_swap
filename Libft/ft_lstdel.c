/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:00:45 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/20 15:00:27 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	tmp = NULL;
	if (*alst != NULL && del != NULL)
	{
		while (*alst != NULL)
		{
			tmp = *alst;
			del((*alst)->content, (*alst)->content_size);
			ft_memdel((void **)alst);
			*alst = (*tmp).next;
		}
	}
}
