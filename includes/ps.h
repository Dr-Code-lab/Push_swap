/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 20:24:38 by ophuong           #+#    #+#             */
/*   Updated: 2020/05/24 11:29:05 by Student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_H
# define PS_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>

typedef struct
{
	int				n;
	int				up;
	int				down;
	int				way;
	int				steps;
}					t_num;

typedef struct
{
	int				base_n;
	int				min_n;
	int				max_n;
	int				*sorted;
	int				*stk_a;
	int				*stk_b;
	int				size_a;
	int				size_b;
	t_num			*sis_a;
	t_num			*sis_b;
}					t_var;

void				move_up(t_var *vari, int pos);
void				move_down(t_var *vari, int pos);
void				check_minmax(char *av);
void				ft_free(t_var *vari);
int					check_str(char *arg);
void				valid_args(t_var *vari, char *arg);
void				put_on_place(t_var *vari);
void				valid_pos(t_var *vari);
void				a_sort(t_var *vari);
void				b_sort(t_var *vari);
void				cut_a(t_var *vari);
void				valid_sign(t_var *vari);
void				sign_massive(t_var *vari);
int					check_args(t_var *vari);
void				initialization(t_var *vari);
void				validation(t_var *vari, int ac, char **av);
void				easysort(t_var *vari);
void				sa(t_var *vari);
void				sb(t_var *vari);
void				ss(t_var *vari);
void				pa(t_var *vari);
void				pb(t_var *vari);
void				ra(t_var *vari);
void				rb(t_var *vari);
void				rr(t_var *vari);
void				rra(t_var *vari);
void				rrb(t_var *vari);
void				rrr(t_var *vari);

#endif
