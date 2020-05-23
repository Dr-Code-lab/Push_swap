/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:38:00 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/23 21:38:10 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

int	check_args(t_var *vari)
{
	int o;
	int i;

	i = 0;
	while (i < vari->size_a)
	{
		o = i + 1;
		while (o < vari->size_a)
		{
			if (vari->stk_a[i] == vari->stk_a[o])
				return (0);
			o++;
		}
		i++;
	}
	return (1);
}
