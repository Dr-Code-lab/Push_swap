/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 20:24:38 by ophuong           #+#    #+#             */
/*   Updated: 2020/02/18 20:01:17 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_H
# define PS_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct
{
	int				base_n;
	int				*sorted;
	int				*stk_a;
	int				*stk_b;
	int				size;
}					t_var;

void	initialization(t_var *vari);
void	validation(t_var *vari, int ac, char **av);
void	easysort(t_var *vari);

void	sa(t_var *vari);
//void	sb(t_var *vari);
//void	ss(t_var *vari);
//void	pa(t_var *vari);
//void	pb(t_var *vari);
//void	ra(t_var *vari);
//void	rb(t_var *vari);
//void	rr(t_var *vari);
void	rra(t_var *vari);
//void	rrb(t_var *vari);
//void	rrr(t_var *vari);

#endif
