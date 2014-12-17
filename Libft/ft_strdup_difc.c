/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_difc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-rus <jde-rus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 21:16:27 by jde-rus           #+#    #+#             */
/*   Updated: 2014/12/17 21:39:12 by jde-rus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_difc(char const *s, char c)
{
	char	*dst;

	dst = NULL;
	if (s)
	{
		dst = ft_strnew(ft_strlen_difc(s, c));
		if (dst == NULL)
			return (NULL);
		ft_strcpy_difc(dst, s, c);
	}
	return (dst);
}
