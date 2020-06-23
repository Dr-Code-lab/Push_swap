/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 11:39:55 by ophuong           #+#    #+#             */
/*   Updated: 2020/06/15 21:09:40 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

static void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(0);
}

static void	get_move(t_var *vari, char *move)
{
	if (ft_strcmp(move, "sa") == 0)
		sa(vari);
	else if (ft_strcmp(move, "sb") == 0)
		sb(vari);
	else if (ft_strcmp(move, "ss") == 0)
		ss(vari);
	else if (ft_strcmp(move, "pb") == 0)
		pb(vari);
	else if (ft_strcmp(move, "pa") == 0)
		pa(vari);
	else if (ft_strcmp(move, "rb") == 0)
		rb(vari);
	else if (ft_strcmp(move, "ra") == 0)
		ra(vari);
	else if (ft_strcmp(move, "rr") == 0)
		rr(vari);
	else if (ft_strcmp(move, "rra") == 0)
		rra(vari);
	else if (ft_strcmp(move, "rrb") == 0)
		rrb(vari);
	else if (ft_strcmp(move, "rrr") == 0)
		rrr(vari);
	else
		ft_error();
}

static void	final_check(t_var *vari)
{
	int	i;

	i = 0;
	while (i < vari->size_a - 1 || vari->size_a == 0)
	{
		if ((vari->stk_a[i] < vari->stk_a[i + 1]
					|| vari->size_a == 1) && vari->size_b == 0)
			i++;
		else
		{
			ft_putstr("\e[31mKO\e[0m\n");
			ft_free(vari);
			return ;
		}
	}
	ft_putstr("\e[32mOK\e[0m\n");
}

static void	check_it(t_var *vari)
{
	char	*move;

	move = NULL;
	if (check_args(vari) == 1)
	{
		while (get_next_line(0, &move) > 0)
		{
			get_move(vari, move);
			free(move);
		}
		move = NULL;
		final_check(vari);
	}
	else
		ft_error();
}

int			main(int argc, char **argv)
{
	t_var	v;
	t_var	*vari;

	vari = &v;
	if (argc > 1)
	{
		initialization(vari);
		if (argc == 2)
			valid_args(vari, argv[1]);
		else
			validation(vari, argc, argv);
		check_it(vari);
		ft_free(vari);
		exit(0);
	}
}
