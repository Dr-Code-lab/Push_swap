/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 17:29:39 by ophuong           #+#    #+#             */
/*   Updated: 2020/02/27 10:20:11 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

void	sb(t_var *vari)
{
	ft_swap(&vari->stk_b[0], &vari->stk_b[1], sizeof(int));
}
