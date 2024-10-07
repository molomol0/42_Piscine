/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <jdenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:06:20 by jdenis            #+#    #+#             */
/*   Updated: 2023/02/28 22:13:09 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	swap_ptr(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i + 1])
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			swap_ptr(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}

/*#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	write(1, "\n", 1);
}

int main(void)
{
	int i = 0;
	char	*tab[4] = {"c", "b", "a", "\0"};
	while (tab[i])
	{
		ft_putstr(tab[i]);
		i++;
	}
	i = 0;
	ft_sort_string_tab(tab);
	while (tab[i])
	{
		ft_putstr(tab[i]);
		i++;
	}
	return (0);
}*/