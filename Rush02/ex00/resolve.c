/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <jdenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:31:37 by aducobu           #+#    #+#             */
/*   Updated: 2023/02/26 17:58:46 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_read_dict(char *file);
char	**ft_split(char *str, char *charset, int i);
int		ft_atoi(char *nbr);
void	sep_nbr(char *nbr, char **tab, int *ptr);
int		double_in_dict(char **tab);

int	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (0);
}

int	resolve(char *file, char *nbr)
{
	char	**tab;
	char	*str;
	int		*ptr;
	int		ptrv;

	ptr = &ptrv;
	ptrv = 0;
	str = ft_read_dict(file);
	if (str == NULL)
		return (0);
	tab = ft_split(str, "\n", 0);
	free(str);
	if (tab == NULL)
		return (0);
	else
	{
		if (double_in_dict(tab) == 0)
			return (free_tab(tab));
		sep_nbr(nbr, tab, ptr);
		write(1, "\n", 1);
	}
	free_tab(tab);
	return (1);
}
