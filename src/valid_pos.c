/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_pos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 16:00:18 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/23 20:28:23 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

static void	set_steps_b(t_var *vari, int i)
{
	if ((vari->stk_a[0] > vari->stk_a[vari->size_a - 1]
			&& vari->stk_a[0] > vari->stk_b[i]
			&& vari->stk_b[i] > vari->stk_a[vari->size_a - 1])
		|| (vari->stk_a[0] > vari->stk_a[vari->size_a - 1]
			&& vari->stk_a[0] < vari->stk_b[i]
			&& vari->stk_b[i] < vari->stk_a[vari->size_a - 1]))
	{
		if (vari->sis_b[i].up < vari->sis_b[i].down)
			vari->sis_b[i].steps = vari->sis_b[i].up;
		else
			vari->sis_b[i].steps = vari->sis_b[i].down;
	}
}

static void	set_steps_ab(t_var *vari, int i, int o)
{
	int a;
	int	b;

	a = 0;
	b = 0;
	if (vari->sis_a[o + 1].up < vari->sis_a[o + 1].down)
		a = vari->sis_a[o + 1].up;
	else
		a = vari->sis_a[o + 1].down;
	if (vari->sis_b[i].up < vari->sis_b[i].down)
		b = vari->sis_b[i].up;
	else
		b = vari->sis_b[i].down;
	vari->sis_b[i].steps = a + b;
	if ((a == vari->sis_a[o + 1].up && b == vari->sis_b[i].up) ||
			(a == vari->sis_a[o + 1].down && b == vari->sis_b[i].down))
		vari->sis_b[i].way = 1;
}

static void	check_pos_minmax(t_var *vari, int *o)
{
	int	i;

	i = *o;
	if ((vari->stk_a[i] == vari->min_n
				&& vari->stk_a[i + 1] == vari->max_n)
		|| (vari->stk_a[i] == vari->max_n
			&& vari->stk_a[i + 1] == vari->min_n))
		*o = i + 1;
}

void		valid_pos(t_var *vari)
{
	int	i;
	int	o;

	i = 0;
	while (i < vari->size_b)
	{
		o = 0;
		while (!(vari->stk_b[i] > vari->stk_a[o]
					&& vari->stk_b[i] < vari->stk_a[o + 1])
				&& !(vari->stk_b[i] < vari->stk_a[o]
					&& vari->stk_b[i] > vari->stk_a[o + 1])
				&& o < vari->size_a - 1)
		{
			o++;
			check_pos_minmax(vari, &o);
		}
		if (o != vari->size_a - 1)
			set_steps_ab(vari, i, o);
		else
			set_steps_b(vari, i);
		i++;
	}
}
