/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <jdenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:33:49 by jdenis            #+#    #+#             */
/*   Updated: 2023/02/28 21:53:31 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

/*int	is_not_qiyana(char *str)
{
	int i = 0;
	char q[] = "qiyana"; 
	while (str[i])
	{
		if (str[i] != q[i])
			return (1);
		i++;
	}
	return (0);
}

#include<stdio.h>

int main(void)
{
	char *tab[10] = {"54", "ma","vie"};
	printf("%d\n", ft_count_if(tab, 2, &is_not_qiyana));
	return (0);
}*/