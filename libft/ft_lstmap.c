/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 18:26:42 by ophuong           #+#    #+#             */
/*   Updated: 2019/09/16 20:41:22 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	f_memdel(t_list **tmp, t_list **fresh)
{
	t_list	*temp;

	while ((*fresh)->next != *tmp)
	{
		temp = (*fresh);
		free((void *)(*fresh)->content);
		free((void *)(*fresh)->content_size);
		ft_memdel((void **)fresh);
		fresh = &(*temp).next;
	}
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fresh;
	t_list	*tmp;
	t_list	*f_lst;

	if (!lst || !f)
		return (NULL);
	f_lst = f(lst);
	if (!(fresh = ft_lstnew(f_lst->content, f_lst->content_size)))
		return (NULL);
	tmp = fresh;
	lst = lst->next;
	while (lst != NULL)
	{
		f_lst = f(lst);
		if (!(tmp->next = ft_lstnew(f_lst->content, f_lst->content_size)))
		{
			f_memdel(&tmp->next, &fresh);
			return (NULL);
		}
		tmp = tmp->next;
		lst = lst->next;
	}
	return (fresh);
}
