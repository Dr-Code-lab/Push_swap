/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:14:19 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/18 22:00:20 by Student          ###   ########.fr       */
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
	free(vari->sis_a);
	vari->sis_a = NULL;
	free(vari->sis_b);
	vari->sis_b = NULL;
}
