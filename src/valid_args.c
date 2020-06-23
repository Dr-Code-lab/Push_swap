/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:38:00 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/31 18:34:42 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

static void		init_args(t_var *vari, char *arg, size_t c)
{
	size_t	i;
	size_t	o;

	i = 0;
	o = 0;
	vari->args = ft_memalloc(sizeof(char*) * (c + 1));
	c = 0;
	while (i <= ft_strlen(arg))
	{
		if (arg[i] == ' ' || arg[i] == '\0')
		{
			vari->args[c] = ft_memalloc(sizeof(char) * (o + 1));
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
}

static void		fill_args(t_var *vari, char *arg)
{
	size_t	i;
	size_t	o;
	size_t	j;

	i = 0;
	o = 0;
	j = 0;
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
			vari->args[o][j] = arg[i];
			i++;
			j++;
		}
	}
}

static void		valid_vari(t_var *vari, size_t c)
{
	size_t	i;

	i = 0;
	vari->size_a = c;
	vari->stk_a = ft_memalloc(sizeof(int) * vari->size_a);
	vari->stk_b = ft_memalloc(sizeof(int) * vari->size_a);
	vari->sorted = ft_memalloc(sizeof(int) * vari->size_a);
	while (i < c)
	{
		check_minmax(vari->args[i]);
		vari->stk_a[i] = ft_atoi(vari->args[i]);
		if (c > 3)
			vari->sorted[i] = vari->stk_a[i];
		i++;
	}
}

void			valid_args(t_var *vari, char *arg)
{
	size_t	i;
	size_t	c;

	c = 1;
	i = 0;
	check_str(arg);
	while (i < ft_strlen(arg))
	{
		if (arg[i] == ' ')
			c++;
		i++;
	}
	init_args(vari, arg, c);
	fill_args(vari, arg);
	valid_vari(vari, c);
}
