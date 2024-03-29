/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 20:24:38 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/11 21:58:53 by Student          ###   ########.fr       */
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

typedef struct number
{
	int	n;
	int	up;
	int	down;
	int	pos;
}		t_num;

typedef struct
{
	int				base_n;		/*basic element*/
	int				*sorted;	/*sorted array of arguments*/
	int				*stk_a;		/*satck for sorting*/
	int				*stk_b;		/*temporary stack*/
	int				size_a;		/*size of stack A*/
	int				size_b;		/*size of stack B*/
	t_num				*sis_a;		/*signed stack A*/
}					t_var;		/*name of type*/

int		check_str(char *arg);
void	valid_args(t_var *vari, char *arg);
void	put_on_place(t_var *vari);
void	valid_pos(t_var *vari);
void	a_sort(t_var *vari);
void	b_sort(t_var *vari);
void	cut_a(t_var *vari);
void	valid_sign(t_var *vari);
void	sign_massive(t_var *vari);
int		check_args(t_var *vari);
void	initialization(t_var *vari);
void	validation(t_var *vari, int ac, char **av);
void	easysort(t_var *vari);				/*sort array of 2 - 6 elements*/
void	sa(t_var *vari);
void	sb(t_var *vari);
void	ss(t_var *vari);
void	pa(t_var *vari);
void	pb(t_var *vari);
void	ra(t_var *vari);
void	rb(t_var *vari);
void	rr(t_var *vari);
void	rra(t_var *vari);
void	rrb(t_var *vari);
void	rrr(t_var *vari);

#endif
