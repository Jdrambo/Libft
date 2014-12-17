/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_difc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-rus <jde-rus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 21:19:19 by jde-rus           #+#    #+#             */
/*   Updated: 2014/12/17 21:53:20 by jde-rus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_difc(char const *s, char c)
{
	size_t	dst;

	dst = 0;
	if (s)
		while (*s && *s != c)
		{
			dst++;
			s++;
		}
	return (dst);
}