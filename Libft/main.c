/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-rus <jde-rus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 21:41:58 by jde-rus           #+#    #+#             */
/*   Updated: 2015/01/13 04:30:31 by jde-rus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	char str[] = "bonjour les amis";
	char **tab;
	char c;

	c = ' ';

	tab = (char**)ft_memalloc(ft_strlen(str) + 1);
	tab = ft_strsplit(str, c);
	
	ft_putendl(tab[0]);
	ft_putendl(tab[1]);

	return (1);
}
