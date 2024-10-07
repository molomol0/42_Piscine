/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:29:56 by jdenis            #+#    #+#             */
/*   Updated: 2023/02/15 17:53:25 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2)
		return (1);
	if (nb < 2 || nb % 2 == 0)
		return (0);
	i = 3;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}
/*
#include <stdio.h>

int ft_is_prime(int nb);

int	main(void)
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
		ft_is_prime(-1) == 0 ? "OK" : "Fail",
		ft_is_prime(-3) == 0 ? "OK" : "Fail",
		ft_is_prime(0) == 0 ? "OK" : "Fail",
		ft_is_prime(1) == 0 ? "OK" : "Fail",
		ft_is_prime(2) == 1 ? "OK" : "Fail",
		ft_is_prime(3) == 1 ? "OK" : "Fail",
		ft_is_prime(4) == 0 ? "OK" : "Fail",
		ft_is_prime(5) == 1 ? "OK" : "Fail",
		ft_is_prime(6) == 0 ? "OK" : "Fail",
		ft_is_prime(7) == 1 ? "OK" : "Fail",
		ft_is_prime(10) == 0 ? "OK" : "Fail",
		ft_is_prime(11) == 1 ? "OK" : "Fail",
		ft_is_prime(13) == 1 ? "OK" : "Fail",
		ft_is_prime(19) == 1 ? "OK" : "Fail",
		ft_is_prime(20) == 0 ? "OK" : "Fail"
		  );
}*/
