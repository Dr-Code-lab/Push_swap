/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_sign.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:38:00 by ophuong           #+#    #+#             */
/*   Updated: 2020/03/03 17:43:02 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

void	valid_sign(t_var *vari)
{
	if (vari)
	{
		if (!(vari->sis_a = malloc(sizeof(t_num) * (vari->size_a))) ||
				!(vari->sis_b = malloc(sizeof(t_num) * (vari->size_a))))
			return ;
		ft_bzero(vari->sis_a, vari->size_a * sizeof(t_num)); 
		ft_bzero(vari->sis_b, vari->size_a * sizeof(t_num));
		sign_massive(vari);
		/////////////////
		int	i;

		i = 0;
		write(1, "\n", 1);
		while (i < vari->size_a)
		{
			write(1, "a.n:", 4);
			ft_putnbr(vari->sis_a[i].n);
			ft_putchar('	');
			write(1, "a.u:", 4);
			ft_putnbr(vari->sis_a[i].up);
			ft_putchar('	');
			write(1, "a.d:", 4);
			ft_putnbr(vari->sis_a[i].down);
			ft_putchar('\n');
			i++;
		}
		/////////////////
	}
}