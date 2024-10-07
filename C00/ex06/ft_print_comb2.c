/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 00:19:19 by jdenis            #+#    #+#             */
/*   Updated: 2023/02/10 01:08:48 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_nb(int n)
{
	char	a;
	char	b;
	int		c;
	int		d;

	a = n / 10;
	b = n % 10;
	c = '0' + a;
	d = '0' + b;
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 00;
	b = 01;
	while (a < 99)
	{
		while (b <= 99)
		{
			print_nb(a);
			write(1, " ", 1);
			print_nb(b);
			if (!(a == 98 && b == 99))
			{
				write(1, ",", 1);
			}
			b++;
		}
		a++;
		b = a + 1;
	}
	write(1, ".", 1);
}
