/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-rus <jde-rus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 18:40:23 by jde-rus           #+#    #+#             */
/*   Updated: 2014/11/27 19:23:33 by jde-rus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c)
{
	if (c && (c == '\n' || c == '\r' || c == '\t' || c == '\v'\
				|| c == ' ' || c == '\f'))
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int	mult;
	int result;

	mult = 1;
	result = 0;
	if (!str)
		return (0);
	while (*str && ft_check(*str))
		str++;
	if (*str == '-')
	{
		mult = -1;
		str++;
	}
	if (*str == '+' && mult != -1)
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (result * mult);
		result = ((result * 10) + (*str - '0'));
		str++;
	}
	return (result * mult);
}
