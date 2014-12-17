/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-rus <jde-rus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 18:35:30 by jde-rus           #+#    #+#             */
/*   Updated: 2014/11/24 18:50:30 by jde-rus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(const char *s)
{
	char	*dest;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = (ft_strlen(s) - 1);
	while (s && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	while (s && (s[len] == ' ' || s[len] == '\n' || s[len] == '\t') && i != len)
		len--;
	len++;
	dest = ft_memalloc(len);
	if (!s || !dest)
		return (NULL);
	while (i < len && s[i] != '\0')
	{
		dest[j] = s[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
