/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducobu <aducobu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:07:40 by aducobu           #+#    #+#             */
/*   Updated: 2023/02/26 17:08:25 by aducobu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**free_all_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (NULL);
}

int	in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	nb_str(char *str, char *charset)
{
	int	i;
	int	compteur;

	i = 0;
	compteur = 0;
	while (str[i])
	{
		while (str[i] && in_charset(str[i], charset))
			i++;
		if (str[i] && !in_charset(str[i], charset))
			compteur++;
		while (str[i] && !in_charset(str[i], charset))
			i++;
	}
	return (compteur);
}

int	nb_char(char *str, char *charset)
{
	int	compteur;

	compteur = 0;
	while (*str && !in_charset(*str, charset))
	{
		compteur++;
		str++;
	}
	return (compteur);
}

char	**ft_split(char *str, char *charset, int i)
{
	int		j;
	char	**res;

	res = malloc(sizeof(*res) * (nb_str(str, charset) + 1));
	if (!res)
		return (NULL);
	while (*str)
	{
		while (*str && in_charset(*str, charset))
			str++;
		if (*str)
		{
			res[i] = malloc(sizeof(char) * nb_char(str, charset) + 1);
			if (!res)
				return (free_all_tab(res));
			j = 0;
			while (*str && !in_charset(*str, charset))
				res[i][j++] = *str++;
			res[i][j] = '\0';
			i++;
		}
	}
	res[i] = 0;
	return (res);
}
