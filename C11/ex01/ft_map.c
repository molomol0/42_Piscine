/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <jdenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:43:11 by jdenis            #+#    #+#             */
/*   Updated: 2023/02/28 21:52:58 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*res;

	i = 0;
	res = malloc(sizeof(int) * length);
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}

/*int	time_2(int n)
{
	return (2 * n);
}

int main(void)
{	int i = 0;
	int	tab[] = {1, 2, 3, 4, 5, 6};
	while (i < 6)
	{
		printf("%d\n", ft_map(tab, 6, &time_2)[i]);
		i++;
	}
}*/