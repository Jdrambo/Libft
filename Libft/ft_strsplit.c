/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-rus <jde-rus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 20:05:55 by jde-rus           #+#    #+#             */
/*   Updated: 2014/12/17 21:41:27 by jde-rus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_split(char **dst, char const *s, char c, size_t len)
{
	size_t	i;

	i = 0;
	while (*s == c && *s)
		s++;
	while (i < len)
	{
		dst[i] = ft_strdup_difc(s, c);
		if (dst[i] == NULL)
			return (0);
		while (*s != c && *s)
			s++;
		while (*s == c && *s)
			s++;
		i++;
	}
	dst[i] = 0;
	return (1);
}

static	size_t	ft_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c)
			count ++;
		while (*s != c)
			s++;
		s++;
	}
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**dst;
	size_t	len;

	dst = NULL;
	if (s == NULL)
		return (NULL);
	len = ft_count(s, c);
	if ((dst = (char**)ft_memalloc(len)) == NULL)
		return (NULL);
	if (ft_split(dst, s, c, len))
		return (dst);
	else
	{
		free(dst);
		dst = NULL;
	}
	return (dst);
}
