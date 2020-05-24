/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 10:16:05 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/24 16:41:22 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

void	initialization(t_var *vari)
{
	vari->args = NULL;
	vari->base_n = 0;
	vari->min_n = 0;
	vari->max_n = 0;
	vari->sorted = NULL;
	vari->stk_a = NULL;
	vari->stk_b = NULL;
	vari->size_a = 0;
	vari->size_b = 0;
	vari->sis_a = NULL;
	vari->sis_b = NULL;
}
