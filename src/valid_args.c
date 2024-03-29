/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:38:00 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/11 21:40:11 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

static char		**init_args(char **args, char *arg, size_t c)
{
	/////////////
	ft_putchar('\n');
	ft_putstr("INITING...");
	ft_putchar('\n');
	/////////////
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
			/////////////
			ft_putchar('\n');
			ft_putstr("o = ");
			ft_putnbr(o);
			ft_putchar('\n');
			/////////////
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
	/////////////
	ft_putchar('\n');
	ft_putstr("INITING is OK");
	ft_putchar('\n');
	/////////////
	return (args);
}

static char		**fill_args(char **args, char *arg)
{
	/////////////
	ft_putstr(arg);
	ft_putstr("FILLING...");
	ft_putnbr(ft_strlen(arg));
	ft_putchar('\n');
	/////////////
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
			/////////////
			ft_putstr("FILLING ' ' o = ");
			/////////////
			ft_putnbr(o);
			ft_putchar('|');
			o++;
			ft_putnbr(o);
			j = 0;
			i++;
		}
		else
		{
			ft_putchar('\n');
			ft_putchar(arg[i]);
			ft_putchar('\n');
			ft_putchar(args[o][j]);
			ft_putchar('\n');
			args[o][j] = arg[i];
			ft_putchar(args[o][j]);
			ft_putchar('\n');
			/////////////
			ft_putstr("FILLed.char.");
			ft_putchar('\n');
			/////////////
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
	ft_putstr(arg);
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
		////////////
		ft_putstr("	c = ");
		ft_putnbr(c);
		ft_putchar('\n');
		////////////
			i++;
		}
		args = init_args(args, arg, c);
		args = fill_args(args, arg);
	valid_vari(args, vari, c);
	}
	////////////
	i = 0;
	while (i < c)
	{
		ft_putchar('\n');
		ft_putnbr(vari->stk_a[i]);
		ft_putstr("	c = ");
		ft_putnbr(c);
		ft_putchar('\n');
		i++;
	}
	////////////
}	
