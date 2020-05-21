/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_pos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 16:00:18 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/21 11:56:09 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

/*static int ft_index(t_num *sis, int i, int *stk)
{
	int	index;

	index = 0;
	while (sis[index].n != stk[i])
		index++;
	////////
	printf("INDEX = %d\n", index);
	//
	return (index);
}
*/
static void	set_steps_b(t_var *vari, int i)
{
		if (vari->sis_b[i].up <= vari->sis_b[i].down)
			vari->sis_b[i].steps = vari->sis_b[i].up;
		else
			vari->sis_b[i].steps = vari->sis_b[i].down;
}

static void	set_steps_ab(t_var *vari, int i, int o)
{
		int a = 0;
		int	b = 0;

		if (vari->sis_a[o].up < vari->sis_a[o].down)
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

static void	get_steps(t_var *vari)
{
	int	i;
	int	o;

	i = 0;
	while (i < vari->size_b)
	{
		o = 0;
		while (!(vari->stk_b[i] > vari->stk_a[o] && vari->stk_b[i] < vari->stk_a[o + 1])
				&& !(vari->stk_b[i] < vari->stk_a[o] && vari->stk_b[i] > vari->stk_a[o + 1])
				&& o < vari->size_a - 1)
		{
			o++;
			if ((vari->stk_a[o] == vari->min_n && vari->stk_a[o + 1] == vari->max_n)
				|| (vari->stk_a[o] == vari->max_n && vari->stk_a[o + 1] == vari->min_n))
				o++;
		}
		if (o != vari->size_a - 1)
			set_steps_ab(vari, i, o);
		else
		{
			if (vari->stk_a[0] > vari->stk_a[vari->size_a - 1] 
					&& vari->stk_a[0] > vari->stk_b[i]
					&& vari->stk_b[i] > vari->stk_a[vari->size_a - 1])
				set_steps_b(vari, i);
			else if(vari->stk_a[0] > vari->stk_a[vari->size_a - 1] 
					&& vari->stk_a[0] < vari->stk_b[i]
					&& vari->stk_b[i] < vari->stk_a[vari->size_a - 1])
				set_steps_b(vari, i);
			//else if (vari->stk_a[0] < vari->stk_a[vari->size_a - 1]
			//		&& vari->stk_a[0] > vari->stk_b[i]
			//		&& vari->stk_b[i] < vari->stk_a[vari->size_a - 1])
			//	set_steps_b(vari, i);
			//else if (vari->stk_a[0] < vari->stk_a[vari->size_a - 1] 
			//		&& vari->stk_a[0] < vari->stk_b[i]
			//		&& vari->stk_b[i] > vari->stk_a[vari->size_a - 1])
			//	set_steps_b(vari, i);
		}
	///////
	//ft_putstr("STEPS SET - OK\n");
	//	
		i++;
	}
}

void		valid_pos(t_var *vari)
{
/*	int	i;
	int	o;

	i = 0;
	/////////////
	printf("SIZE_A = %d\n", vari->size_a);
	//
	while(i < vari->size_a)
	{
		o = ft_index(vari->sis_a, i, vari->stk_a);
		vari->sis_a[o].up = o;
		vari->sis_a[o].down = vari->size_b - o;
		vari->sis_a[o].steps = 0;
		i++;
	}
	i = 0;
	//////////////
	printf("SIZE_B = %d\n", vari->size_b);
	//
	while(i < vari->size_b)
	{
		o = ft_index(vari->sis_b, i, vari->stk_b);
		vari->sis_b[o].up = o;
		vari->sis_b[o].down = vari->size_b - o;
		i++;
	}*/
	///////////////
	//ft_putstr("OK\n");
	//
	get_steps(vari);
	//////////////
//	ft_putstr("VALID_POS - OK\n");
	/////////////
}
