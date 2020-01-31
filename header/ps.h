/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 20:24:38 by ophuong           #+#    #+#             */
/*   Updated: 2020/01/31 20:10:43 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_H
# define PS_H

# include "../libft/libft.h"
# include <unistd.h>i
# include <io.h>
# include <stdio.h>

typedef union
{
	int		*a;
	int		*b;
	char	*c;
	struct
	{
		char	*data;
		move	*next;
	}					move;
}						stack;

typedef struct
{
	int		a_max;
	int 	size_b;
	int		size_a;

}						var;

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
