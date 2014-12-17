/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-rus <jde-rus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 21:41:58 by jde-rus           #+#    #+#             */
/*   Updated: 2014/12/17 22:00:11 by jde-rus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	char str[] = "bonjour les amis";
	size_t nbr;
	char c;
	char *dst;
	char dst2[] = "J'aime les bananes";
	char **tab;

	c = ' ';
	nbr = ft_strlen_difc(str, c);
	ft_putstr("nbr = ");
	ft_putnbr(nbr);
	ft_putchar('\n');
	dst = ft_strdup_difc(str, c);
	ft_putendl(dst);
	ft_putchar('\n');
	tab = ft_strsplit(dst2, c);

	ft_putendl(tab[0]);
	ft_putendl(tab[1]);
	ft_putendl(tab[2]);
	return (1);
}
