/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   browse_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <jdenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:04:53 by jdufour           #+#    #+#             */
/*   Updated: 2023/02/26 17:58:01 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_atoi(char *str);
char	*ft_itoa(int i);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	display(char *line)
{
	int	i;

	i = 0;
	while (line[i] != ':')
		i++;
	i++;
	while (line[i] == ' ')
		i++;
	while (line[i] && line[i])
	{
		write(1, &line[i], 1);
		i++;
	}
}

void	browse_tab(char **tab, char *nbr, int *ptr)
{
	int		i;
	int		nline;
	char	*nstr;

	i = 0;
	while (tab[i])
	{
		nline = ft_atoi(tab[i]);
		if (nline >= 0)
		{
			nstr = ft_itoa(nline);
			if (ft_strcmp(nstr, nbr) == 0)
			{
				*ptr = *ptr + 1;
				if (*ptr > 1)
					write(1, " ", 1);
				display(tab[i]);
			}
			free(nstr);
		}
		i++;
	}
}
