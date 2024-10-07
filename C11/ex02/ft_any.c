/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <jdenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:14:43 by jdenis            #+#    #+#             */
/*   Updated: 2023/02/28 22:13:52 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
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
	char *tab[20] = {"qiyana"};
	printf("%d\n", ft_any(tab, &is_not_qiyana));
	return (0);
}*/