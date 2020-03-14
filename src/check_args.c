/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ophuong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:38:00 by ophuong           #+#    #+#             */
/*   Updated: 2020/03/03 17:43:02 by ophuong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ps.h"

int	check_args(int ac, char **av)
{
    int o;
    int i;

    i = 1;
    while (i < ac)
    {
        o = i + 1;
        while (o < ac)
        {
            if (ft_atoi(av[i]) == ft_atoi(av[o]))
                return (0);
            o++;
        }
        i++;
    }
    return (1);
}
