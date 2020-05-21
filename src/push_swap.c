/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:14:19 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/21 23:44:51 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

void	check_ok(t_var *vari)
{
	int	i;

	i = 0;
	while (vari->stk_a[i] < vari->stk_a[i + 1] && i < vari->size_a - 1)
		i++;
	if (i ==  vari->size_a - 1)
			exit (0);
}

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
			check_ok(vari);	
	/*/////////
	int i = 0;
	while (i < vari->size_a)
	{
		printf("A: %d = %d\n", i, vari->stk_a[i]);
		i++;
	}
	i = 0;
	while (i < vari->size_b)
	{
		printf("B: %d = %d\n", i, vari->stk_b[i]);
		i++;
	}
	*///
			if (vari->size_a < 7)
				easysort(vari);
			else
			{
				ft_qsort(vari->sorted, vari->size_a, sizeof(int), ft_compare);
				valid_sign(vari);
				vari->base_n = vari->sorted[vari->size_a / 2 - 1];
				cut_a(vari);
	/*////////
	int i = 0;
	while (i < vari->size_a)
	{
		printf("A: %d = %d\n", i, vari->stk_a[i]);
		i++;
	}
	i = 0;
	while (i < vari->size_b)
	{
		printf("B: %d = %d\n", i, vari->stk_b[i]);
		i++;
	}
	*///
			
				while (vari->size_b > 0)
				{
					sign_massive(vari);
					valid_pos(vari);
					put_on_place(vari);
				}
				if (vari->size_b == 0 && vari->stk_a[0] != vari->min_n)
				{
					int	i_min;

					i_min = 0;
					while (vari->stk_a[i_min] != vari->min_n)
						i_min++;
					////////
					//printf("I_MIN = %d\n", i_min);
					//printf("SIZE_A = %d\n", vari->size_a);
					//
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
			}
		}
		else
			ft_putstr("Error\n");
	}
	else
	    ft_putstr("Error\n");
	/*/////////
	int i = 0;
	while (i < vari->size_a)
	{
		printf("A: %d = %d\n", i, vari->stk_a[i]);
		i++;
	}
	i = 0;
	while (i < vari->size_b)
	{
		printf("B: %d = %d\n", i, vari->stk_b[i]);
		i++;
	}
	*///
	ft_free(vari);
	return (0);
}
