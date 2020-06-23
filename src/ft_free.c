/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:14:19 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/24 19:20:46 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

static void	free_args(t_var *vari)
{
	int	i;

	i = 0;
	while (i <= vari->size_a)
	{
		free(vari->args[i]);
		vari->args[i] = NULL;
		i++;
	}
	free(vari->args);
	vari->args = NULL;
}

void		ft_free(t_var *vari)
{
	if (vari->args != NULL)
		free_args(vari);
	free(vari->stk_a);
	vari->stk_a = NULL;
	free(vari->stk_b);
	vari->stk_b = NULL;
	free(vari->sorted);
	vari->sorted = NULL;
	if (vari->sis_a && vari->sis_b)
	{
		free(vari->sis_a);
		vari->sis_a = NULL;
		free(vari->sis_b);
		vari->sis_b = NULL;
	}
}
