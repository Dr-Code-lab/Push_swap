/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 17:29:39 by ophuong           #+#    #+#             */
/*   Updated: 2020/02/27 10:15:22 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

void	sa(t_var *vari)
{
/*	int	tmp;

	if(!vari->stk_a)
		return ;
	tmp = vari->stk_a[0];
	vari->stk_a[0] = vari->stk_a[1];
	vari->stk_a[1] = tmp;
	*/
	ft_swap(&vari->stk_a[0], &vari->stk_a[1], sizeof(int));
}
