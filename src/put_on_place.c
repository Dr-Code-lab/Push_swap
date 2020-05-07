/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    put_on_place.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 16:00:18 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/07 15:28:46 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"
static void		move_up(t_var *vari, int i)
{
	while (vari->stk_b[0] != vari->sis_a[i].n)
	{
		rb(vari);
		ft_putstr("rb");
	}			
}

static void		move_down(t_var *vari, int i)
{
	while (vari->stk_b[0] != vari->sis_a[i].n)
	{
		rrb(vari);
		ft_putstr("rrb");
	}			

}

static int		get_cur(t_var *vari)
{
	int i;
	int	pos;

	i = 0;
	while (vari->stk_a[0] != vari->sis_a[i].n)
		i++;
	pos = vari->sis_a[i].pos - 1;
	i = 0;
	while (vari->sis_a[i].pos != pos)
		i++;
	return (i);
}

void	put_on_place(t_var	*vari)
{
	int	i;

	i = get_cur(vari);
	if (vari->sis_a[i].up < vari->sis_a[i].down)
		move_up(vari, i);
	else
		move_down(vari, i);
	pa(vari);
	ft_putstr("pa\n");
}
