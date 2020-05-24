/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <ophuong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 17:37:50 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/24 17:18:54 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static t_list	*f_lstnew(size_t fd)
{
	t_list	*fresh;

	if (!(fresh = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	else
	{
		fresh->content = NULL;
		fresh->content_size = fd;
		fresh->next = NULL;
	}
	return (fresh);
}

static t_list	*f_list(const int fd, t_list **head)
{
	t_list *buf_long;

	buf_long = *head;
	if (!(*head))
	{
		buf_long = f_lstnew((size_t)fd);
		buf_long->content = ft_strnew(0);
		*head = buf_long;
	}
	while (buf_long->content_size != (size_t)fd)
	{
		if (buf_long->next == NULL)
		{
			buf_long = f_lstnew(fd);
			buf_long->content = ft_strnew(0);
			ft_lstadd(&*head, buf_long);
			break ;
		}
		buf_long = buf_long->next;
	}
	return (buf_long);
}

static int		f_getline(char **line, t_list **buf_long, char *ptr)
{
	ssize_t	id;
	char	*tmp;

	id = 0;
	tmp = ft_strnew(ft_strlen((*buf_long)->content) + 1);
	ft_strcpy(tmp, (*buf_long)->content);
	while (tmp[id] != '\n' && tmp[id] != '\0')
		id++;
	ptr = tmp + id + 1;
	free((*buf_long)->content);
	if (tmp[0] != '\0')
	{
		if (tmp[0] == '\n')
			*line = ft_strnew(0);
		else
		{
			*line = ft_strnew(id);
			ft_strncpy(*line, tmp, id);
		}
		(*buf_long)->content = ft_strdup(ptr);
		free(tmp);
		return (1);
	}
	free(tmp);
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	t_list			*buf_long;
	char			*text;
	ssize_t			nbread;
	char			buf[BUFF_SIZE + 1];
	static t_list	*head;

	if (fd < 0 || BUFF_SIZE < 0 || line == NULL || read(fd, NULL, 0) < 0)
		return (-1);
	buf_long = f_list(fd, &head);
	while ((nbread = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[nbread] = '\0';
		if (buf_long->content == NULL)
			buf_long->content = ft_strdup(buf);
		else
		{
			text = ft_strjoin(buf_long->content, buf);
			free(buf_long->content);
			buf_long->content = text;
		}
		if (ft_strchr(buf_long->content, '\n') != NULL)
			break ;
	}
	return (f_getline(line, &buf_long, 0));
}
