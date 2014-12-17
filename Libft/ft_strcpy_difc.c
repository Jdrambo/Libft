/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_difc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-rus <jde-rus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 20:58:01 by jde-rus           #+#    #+#             */
/*   Updated: 2014/12/17 21:40:04 by jde-rus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy_difc(char *dst, char const *src, char c)
{
	char *str;

	str = dst;
	if (dst == NULL || src == NULL)
		return (NULL);
	while (*src && *src != c)
		*dst++ = *src++;
	*dst = '\0';
	return (str);
}
