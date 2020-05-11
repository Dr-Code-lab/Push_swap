/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:14:19 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/11 22:42:39 by Student          ###   ########.fr       */
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
		if (argc == 2)
			valid_args(vari, argv[1]);
		else
			validation(vari, argc, argv);
		if (check_args(vari) == 1)
		{	
			if (vari->size_a < 7)
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
		}
		else
			ft_putstr("Error\n");
	}
	else
	    ft_putstr("Error\n");
	return (0);
}
