/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-rus <jde-rus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 18:40:23 by jde-rus           #+#    #+#             */
/*   Updated: 2015/01/13 01:29:35 by jde-rus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int		mult;
	long	nbr;

	mult = 1;
	nbr = 0;
	while (*str && ft_isspace(*str))
		str++;
	if (*str && *str == '-')
	{
		mult = -1;
		str++;
	}
	if (*str && *str == '+' && mult != -1)
		str++;
	while (*str && ft_isdigit(*str))
	{
		if ((nbr > (9223372036854775807 - (*str - '0')) / 10) && (mult == -1))
			return (0);
		if ((nbr > (9223372036854775806 - (*str - '0')) / 10) && (mult == 1))
			return (-1);
		nbr = ((nbr * 10) + (*str - '0'));
		str++;
	}
	return ((int)(nbr * mult));
}
