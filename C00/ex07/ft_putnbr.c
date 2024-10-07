/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 04:12:11 by jdenis            #+#    #+#             */
/*   Updated: 2023/02/11 21:15:50 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	i;
	char	d;
	int		tmp;
	int		taille;

	i = nb;
	taille = 1000000000;
	if (i < 0)
	{
		write(1, "-", 1);
		i = i * -1;
	}
	while (i / taille < 1)
	{
		taille = taille / 10;
	}
	while (taille >= 1)
	{
		tmp = i / taille;
		d = '0' + tmp;
		write(1, &d, 1);
		i = i - tmp * taille;
		taille = taille / 10;
	}
}
