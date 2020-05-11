/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:38:00 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/11 22:40:19 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

static char		**init_args(char **args, char *arg, size_t c)
{
	size_t	i;
	size_t	o;

	i = 0;
	o = 0;
	args = ft_memalloc(sizeof(char*) * (c + 1));
	c = 0;
	while (i <= ft_strlen(arg))
	{
		if (arg[i] == ' ' || arg[i] == '\0')
		{
			args[c] = ft_memalloc(sizeof(char) * (o + 1));
			o = 0;
			i++;
			c++;
		}
		else
		{
			i++;
			o++;
		}
	}
	return (args);
}

static char		**fill_args(char **args, char *arg)
{
	size_t	i;
	size_t	o;
	size_t	j;
	char	*tmp;

	i = 0;
	o = 0;
	j = 0;
	tmp = NULL;
	while (i < ft_strlen(arg))
	{
		if (arg[i] == ' ')
		{
			o++;
			j = 0;
			i++;
		}
		else
		{
			args[o][j] = arg[i];
			i++;
			j++;
		}
	}
	return (args);
}

void	valid_vari(char **args, t_var *vari, size_t c)
{
	size_t	i;

	i = 0;
	vari->size_a = c;
	vari->stk_a = ft_memalloc(sizeof(int) * vari->size_a);
	vari->stk_b = ft_memalloc(sizeof(int) * vari->size_a);
	vari->sorted = ft_memalloc(sizeof(int) * vari->size_a);
	while (i < c)
	{
		vari->stk_a[i] = ft_atoi(args[i]);
		if (c > 3)
			vari->sorted[i] = vari->stk_a[i];
		i++;
	}
}

void	valid_args(t_var *vari, char *arg)
{
	size_t	i;
	size_t	c;
	char **args;

	args = NULL;
	c = 1;
	i = 0;
	if (check_str(arg) == 1)
	{
		while (i < ft_strlen(arg))
		{
			if (arg[i] == ' ')
				c++;
			i++;
		}
		args = init_args(args, arg, c);
		args = fill_args(args, arg);
		valid_vari(args, vari, c);
	}
}	
