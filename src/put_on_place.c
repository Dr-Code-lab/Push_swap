/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_on_place.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 16:00:18 by ophuong           #+#    #+#             */
/*   Updated: 2020/06/27 00:21:05 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

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

static int				get_place(t_var *vari, int n)
{
	int	i;
	int	place;

	i = 0;
	place = 0;
	while (i < vari->size_a - 1 && !(n > vari->stk_a[i] && n < vari->stk_a[i + 1]))
	{
		i++;
	}
	if (i != vari->size_a - 1)
		place = i + 1;
	return(place);
}

void			put_on_place(t_var *vari)
{
	int	pos;
	int place;

	pos = get_cur(vari);
		/*/////////////
		int z = 0;
		printf("\nN(Cur) = %d\n", vari->sis_b[pos].n);
		printf("\nN(stk) = %d\n", vari->stk_b[pos]);
		printf("\nNow A: ");
		while (z < vari->size_a)
		{
			printf("%d ", vari->stk_a[z]);
			z++;
		}
		z = 0;
		printf("\nNow B: ");
		while (z < vari->size_b)
		{
			printf("%d ", vari->stk_b[z]);
			z++;
		}
		printf("\nSteps = %d", vari->sis_b[pos].steps);
		printf("\nWay = %d", vari->sis_b[pos].way);
		printf("\nUp-b = %d", vari->sis_b[pos].up);
		printf("\nDown-b = %d\n", vari->sis_b[pos].down);
		//printf("\nUp-a = %d", vari->sis_a[0].up);
		//printf("\nDown-a = %d\n", vari->sis_a[0].down);
	*///
	if (vari->sis_b[pos].steps != 0 && vari->size_a >= 3)
	{
		place = get_place(vari, vari->stk_b[pos]);
		if (vari->sis_b[pos].up < vari->sis_b[pos].down || (vari->sis_b[pos].up == vari->sis_b[pos].down && place < vari->size_a / 2))
			move_up(vari, pos);
		else
			move_down(vari, pos);
	}
	pa(vari);
	ft_putstr("pa\n");

}
