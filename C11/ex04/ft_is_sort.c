/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <jdenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:43:49 by jdenis            #+#    #+#             */
/*   Updated: 2023/03/01 19:41:58 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int	i;
	int	haut;
	int	bas;

	i = 0;
	haut = 0;
	bas = 0;
	while (i < lenght - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			haut++;
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			bas++;
		i++;
	}
	if (haut == i || bas == i)
		return (1);
	return (0);
}

/*int comp(int a, int b)
{
	return (a - b);
}

#include <stdio.h>

int	main(void)
{
	int tab1[] = {1, 2, 3, 4, 6, 5};
	int tab2[] = {6, 5, 4, 3, 2, 1};
	int tab3[] = {1, 2, 3, 6, 4, 5};
	printf("%d\n", ft_is_sort(tab1, 6, &comp));
	printf("%d\n", ft_is_sort(tab2, 6, &comp));
	printf("%d\n", ft_is_sort(tab3, 6, &comp));
	
}*/