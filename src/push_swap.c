/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:14:19 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/23 23:41:19 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

static void		check_ok(t_var *vari)
{
	int	i;

	i = 0;
	while (vari->stk_a[i] < vari->stk_a[i + 1] && i < vari->size_a - 1)
		i++;
	if (i == vari->size_a - 1)
	{
		ft_free(vari);
		exit(0);
	}
}

static void		roll_to_zero(t_var *vari)
{
	int	i_min;

	i_min = 0;
	while (vari->stk_a[i_min] != vari->min_n)
		i_min++;
	if (i_min < vari->size_a / 2)
	{
		while (vari->stk_a[0] != vari->min_n)
		{
			ra(vari);
			ft_putstr("ra\n");
		}
	}
	else
	{
		while (vari->stk_a[0] != vari->min_n)
		{
			rra(vari);
			ft_putstr("rra\n");
		}
	}
}

static void		let_sort(t_var *vari)
{
	check_ok(vari);
	if (vari->size_a < 7)
		easysort(vari);
	else
	{
		ft_qsort(vari->sorted, vari->size_a, sizeof(int), ft_compare);
		valid_sign(vari);
		vari->base_n = vari->sorted[vari->size_a / 2 - 1];
		cut_a(vari);
		while (vari->size_b > 0)
		{
			sign_massive(vari);
			valid_pos(vari);
			put_on_place(vari);
		}
		if (vari->size_b == 0 && vari->stk_a[0] != vari->min_n)
			roll_to_zero(vari);
	}
}

int				main(int argc, char **argv)
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
		if (check_args(vari) == 1)
			let_sort(vari);
		else
			ft_putstr("Error\n");
	}
	else
		ft_putstr("Error\n");
	ft_free(vari);
	return (0);
}
