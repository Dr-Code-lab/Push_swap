/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 20:24:38 by ophuong           #+#    #+#             */
/*   Updated: 2020/01/30 17:40:20 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_H
# define PS_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdio.h>

typedef union
{
}							ps;

typedef struct
{
	int	max;
	int	*stack_a;
	int	*stack_b;

}						t_var;

void	sa();
void	sb();
void	ss();
void	pa();
void	pb();
void	ra();
void	rb();
void	rr();
void	rra();
void	rrb();
void	rrr();

#endif
