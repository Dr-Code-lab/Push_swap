/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 11:39:55 by ophuong           #+#    #+#             */
/*   Updated: 2020/03/27 11:46:00 by ophuong          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

int		main(int argc, char **argv)
{
	int	i;
	t_var	v;
	t_var	*vari;
	char	*move;

	vari = &v;
	move = NULL;
	if (argc > 1)
	{
		initialization(vari);
		validation(vari, argc, argv);
		while (get_next_line(0, &move) > 0)
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
			{
				write(2, "Error\n", 6);

				exit (0);
			}
		}
		i = 0;
		while (i < vari->size_a - 1)
		{
			if (vari->stk_a[i] < vari->stk_a[i + 1])
				i++;
			else
			{
				ft_putstr("\e[31mKO\n");
				return (0);
			}
		}
		ft_putstr("\e[32mOK\n");
		return (0);
	}
}
