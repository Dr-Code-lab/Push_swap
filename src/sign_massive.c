/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sing_massive.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:14:19 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/23 21:23:25 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

void	sign_massive(t_var *vari)
{
	int	i;

	i = 0;
	while (i < vari->size_a)
	{
		vari->sis_a[i].n = vari->stk_a[i];
		vari->sis_a[i].up = i;
		vari->sis_a[i].down = vari->size_a - i;
		vari->sis_a[i].steps = 0;
		vari->sis_a[i].way = 0;
		i++;
	}
	i = 0;
	while (i < vari->size_b)
	{
		vari->sis_b[i].n = vari->stk_b[i];
		vari->sis_b[i].up = i;
		vari->sis_b[i].down = vari->size_b - i;
		vari->sis_b[i].steps = 0;
		vari->sis_b[i].way = 0;
		i++;
	}
}
