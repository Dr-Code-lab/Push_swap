/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:14:19 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/07 15:32:31 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

int		main(int argc, char **argv)
{
	t_var	v;
	t_var	*vari;

	vari = &v;
	if (argc > 1 && check_args(argc, argv) == 1)
	{
		initialization(vari);
		validation(vari, argc, argv);
		if (argc < 8)
			easysort(vari);
		else
		{
			ft_qsort(vari->sorted, vari->size_a, sizeof(int), ft_compare);
			vari->base_n = vari->sorted[vari->size_a / 3];
			valid_sign(vari);
			cut_a(vari);
			while (vari->size_b > 0)
			{
				valid_pos(vari);
				put_on_place(vari);
			}
		}

		////////////////////////////////////////////////////////////////
		ft_putstr("\nbase_n = ");
		ft_putnbr(vari->base_n);
		ft_putchar('\n');
		int i = 0;
		ft_putstr("sorted: ");
		while (i < argc - 1)
		{
			ft_putnbr(vari->sorted[i]);
			write(1, " ", 2);
			i++;
		}
		write(1, "\n", 2);
		i = 0;
		ft_putstr("A:\n");
		while (i < vari->size_a)
		{
			ft_putnbr(vari->stk_a[i]);
			write(1, "\n", 1);
			i++;
		}
		i = 0;
		ft_putstr("B:\n");
		while (i < vari->size_b)
		{
			ft_putnbr(vari->stk_b[i]);
			write(1, "\n", 1);
			i++;
		}
		////////////////////////////////////////////////////////////////
	}
	else
	    ft_putstr("Error\n");
	////////////////////////////////////////////////////////////////////
	write(1, "FIN\n", 4);
	////////////////////////////////////////////////////////////////////
	return (0);
}
