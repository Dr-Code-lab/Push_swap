/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 10:16:05 by ophuong           #+#    #+#             */
/*   Updated: 2020/02/18 20:14:05 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

void	initialization(t_var *vari)
{
	vari->base_n = 0;
	vari->sorted = NULL;
	vari->stk_a = NULL;
	vari->stk_b = NULL;
	vari->size = 0;
}
