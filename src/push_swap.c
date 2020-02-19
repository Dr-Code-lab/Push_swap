/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:14:19 by ophuong           #+#    #+#             */
/*   Updated: 2020/02/19 12:53:58 by ophuong          ###   ########.fr       */
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
		//////////////////
		write(1, "OK\n", 3);
		//////////////////
		validation(vari, argc, argv);
		if (argc == 4)
			easysort(vari);
		else
			init_sort(vari);
	}
	return (0);
}
