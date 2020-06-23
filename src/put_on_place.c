/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_on_place.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 16:00:18 by ophuong           #+#    #+#             */
/*   Updated: 2020/06/21 17:24:35 by Student          ###   ########.fr       */
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

void			put_on_place(t_var *vari)
{
	int	pos;

	pos = get_cur(vari);
	if (vari->sis_b[pos].steps != 0 && vari->size_a >= 3)
	{
		if (vari->sis_b[pos].up < vari->sis_b[pos].down)
			move_up(vari, pos);
		else
			move_down(vari, pos);
	}
	pa(vari);
	ft_putstr("pa\n");
		//////////////
		int z = 0;
		printf("Now: ");
		while (z < vari->size_a)
		{
			printf("%d ", vari->stk_a[z]);
			z++;
		}
		printf("\nWay = %d\n", vari->sis_b[pos].way);
		//

}
