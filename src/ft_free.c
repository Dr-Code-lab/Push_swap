/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:14:19 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/23 19:21:10 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

void	ft_free(t_var *vari)
{
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
