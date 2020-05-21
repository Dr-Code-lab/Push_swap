/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    put_on_place.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 16:00:18 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/21 17:51:03 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

static void		move_up(t_var *vari, int pos)
{
		/////////////
		//printf("STEPS = %d\n", vari->sis_b[pos].steps);
		//printf("WAY = %d\n", vari->sis_b[pos].way);
		//
		if (vari->sis_b[pos].way == 1)
		{
			int	i;

			i = 0;
			while (vari->sis_b[pos].n != vari->stk_b[0] && vari->sis_b[pos].steps - vari->sis_b[pos].up > i)
			{
				rr(vari);
				ft_putstr("rr\n");
				i++;
			}
			while (vari->sis_b[pos].n != vari->stk_b[0])
			{
				rb(vari);
				ft_putstr("rb\n");
			}
			while (vari->sis_b[pos].steps - vari->sis_b[pos].up > i)
			{
				ra(vari);
				ft_putstr("ra\n");
				i++;
			}
		}
		else
		{
			int	i;

			i = 0;
			while (vari->sis_b[pos].n != vari->stk_b[0])
			{
				rb(vari);
				ft_putstr("rb\n");
			}
			while (vari->sis_b[pos].steps - vari->sis_b[pos].up > i)
			{
				rra(vari);
				ft_putstr("rra\n");
				i++;
			}
		}
}

static void		move_down(t_var *vari, int pos)
{
		/////////////
		//printf("STEPS = %d\n", vari->sis_b[pos].steps);
		//printf("WAY = %d\n", vari->sis_b[pos].way);
		//
		if (vari->sis_b[pos].way == 1)
		{
			int	i;

			i = 0;
			while (vari->sis_b[pos].n != vari->stk_b[0] && vari->sis_b[pos].steps - vari->sis_b[pos].down > i)
			{
				rrr(vari);
				ft_putstr("rrr\n");
				i++;
			}
			while (vari->sis_b[pos].n != vari->stk_b[0])
			{
				rrb(vari);
				ft_putstr("rrb\n");
			}
			while (vari->sis_b[pos].steps - vari->sis_b[pos].down > i)
			{
				rra(vari);
				ft_putstr("rra\n");
				i++;
			}
		}
		else
		{
			int	i;

			i = 0;
			while (vari->sis_b[pos].n != vari->stk_b[0])
			{
				rrb(vari);
				ft_putstr("rrb\n");
			}
			while (vari->sis_b[pos].steps - vari->sis_b[pos].down > i)
			{
				ra(vari);
				ft_putstr("ra\n");
				i++;
			}
		}
}

static int		get_cur(t_var *vari)
{
	int i;
	int	pos;

	pos = 0;
	i = 1;
	while (i < vari->size_b)
	{
		if (vari->sis_b[pos].steps > vari->sis_b[i].steps)
			pos = i;
		i++;
	}
	return (pos);
}

void	put_on_place(t_var	*vari)
{
	int	pos;
	
	pos = get_cur(vari);
	//////////////
	//printf("NUMBER = %d\n", vari->stk_b[pos]);
	//printf("STEPS  = %d\n", vari->sis_b[pos].steps);
	//printf("WAY    = %d\n", vari->sis_b[pos].way);
	//
	if (vari->sis_b[pos].steps != 0 && vari->size_a >= 3)
	{
		if (vari->sis_b[pos].up < vari->sis_b[pos].down)
			move_up(vari, pos);
		else
			move_down(vari, pos);
	}
	pa(vari);
	ft_putstr("pa\n");
}
