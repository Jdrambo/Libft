/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-rus <jde-rus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 11:11:54 by jde-rus           #+#    #+#             */
/*   Updated: 2014/12/09 16:33:27 by jde-rus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void *ft_memalloc(size_t size)
{
	void *setmem;

	setmem = NULL;
	setmem = (void *)malloc(size);
	if (setmem == NULL)
		return (NULL);
	ft_bzero(setmem, size);
	return (setmem);
}
