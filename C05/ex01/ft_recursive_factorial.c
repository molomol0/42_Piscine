/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:57:07 by jdenis            #+#    #+#             */
/*   Updated: 2023/02/15 15:33:02 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb < 0)
		return (0);
	else
		return (nb);
}
/*
#include <stdio.h>

int ft_recursive_factorial(int nb);

int	main(void)
{
	printf("0:%d\n", ft_recursive_factorial(-10));
	printf("0:%d\n", ft_recursive_factorial(-1));
	printf("1:%d\n", ft_recursive_factorial(0));
	printf("1:%d\n", ft_recursive_factorial(1));
	printf("3628800:%d\n", ft_recursive_factorial(10));
	printf("6:%d\n", ft_recursive_factorial(3));
}
*/
