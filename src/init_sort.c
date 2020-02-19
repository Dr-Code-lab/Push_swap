/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:25:47 by ophuong           #+#    #+#             */
/*   Updated: 2020/02/19 17:56:12 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"
//#include "../includes/qs.h"

static int	*splitarr(int *less, int *more, int ll, int lm)
{
	int	i;
	int o;

	i = 0;
	o = ll;
	while (i <= lm)
	{
		o++;
		less[o] = more[i];
		i++;
	}
	write(1, "OK\n", 3);	

	/*////////////
	i = 0;
	while (i <= o)
	{
		ft_putnbr(less[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
	////////////*/
	return (less);
}

static int	*quicksort(int *sort, int size)
{
	int	i;
	int	*less;
	int	*more;
	int	basic;
	int	lm;
	int ll;
	
	i = 0;
	ll = -1;
	lm = -1;
	basic = sort[0];
	if (!(less = (int*)malloc(sizeof(int) * (size))) ||
			!(more = (int*)malloc(sizeof(int) * (size))))
		return (0);
//	ft_putnbr(basic);
	if (size < 2)
		return (sort);
	else
	{
		while (i < size)
		{
			if (sort[i] <= basic)
			{
				ll++;
//				ft_putnbr(ll);
				less[ll] = sort[i];
//				ft_putnbr(sort[i]);
			}
			if (sort[i] > basic)
			{
				lm++;
				more[lm] = sort[i];
			}
			i++;
		}
	}
	return (splitarr(quicksort(less, ll), quicksort(more, lm), ll, lm));
}

void		init_sort(t_var	*vari)
{
	int 	i;
	int	*sort;

	i = 0;
	while (i <= vari->size_a)
	{
		vari->sorted[i] = vari->stk_a[i];
		i++;
	}
	/////////////
	i = 0;
	while (i < vari->size_a)
	{
		ft_putnbr(vari->sorted[i]);
		i++;
		ft_putchar(' ');
	}
	ft_putchar('\n');
	ft_putstr("SIZE = ");
	ft_putnbr(vari->size_a);
	ft_putchar('\n');
	////////////*/
	sort = quicksort(vari->sorted, vari->size_a);
	free (vari->sorted);
	vari->sorted = sort;
	free(sort);
	//////////////
	i = 0;
	while (i < vari->size_a - 1)
	{
		ft_putnbr(vari->sorted[i]);
		ft_putchar(' ');
		i++;
	}
	////////////*/
}
