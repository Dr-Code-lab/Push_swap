/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:14:19 by ophuong           #+#    #+#             */
/*   Updated: 2020/02/26 17:08:28 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

int		main(int argc, char **argv)
{
	t_var	v;
	t_var	*vari;

	vari = &v;
	if (argc > 1)
	{
		initialization(vari);
		validation(vari, argc, argv);
		if (argc == 4)
			easysort(vari);
		else
		{
			ft_qsort(vari->sorted, vari->size_a, sizeof(int), ft_compare);
			vari->base_n = vari->sorted[vari->size_a / 2];
		}
		/////////////////
		write(1, "base_n = ", 9);
		ft_putnbr(vari->base_n);
		ft_putchar('\n');
		int i = 0;
		while (i < argc - 1)
		{
			write(1, "\nsorted = ", 10);
			ft_putnbr(vari->sorted[i]);
			write(1, " ", 2);
			i++;
		}
		write(1, "\n", 2);
		/////////////////
	}
	//////////////////
	write(1, "FIN\n", 4);
	/////////////////
	return (0);
}
