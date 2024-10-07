/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sep_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <jdenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:43:59 by jdenis            #+#    #+#             */
/*   Updated: 2023/02/26 17:58:52 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi(char *nbr);
char	*ft_itoa(int nb);
int		ft_nb_len(int nb);
int		ft_power(int nb, int power);
int		sep_nbr_first(char **tab, char *str, int rank, int *ptr);
int		sep_nbr_two_first(char **tab, char *str, int rank, int *ptr);
void	sep_nbr_hundreds(char **tab, char *str, int index, int *ptr);
void	sep_nbr_tens(char **tab, char *str, int index, int *ptr);
int		browse_tab(char **tab, char *nbr, int *ptr);

void	print_hundred(char **tab, char *str, int index, int *ptr)
{
	if (str[index] != '0')
		sep_nbr_hundreds(tab, str, index, ptr);
}

int	boolean_rank(char *str, int index)
{
	if (!(str[index] == '0' && str[index + 1] == '0' && str[index + 2] == '0'))
		return (1);
	else
		return (0);
}

void	sep_nbr(char *nbr, char **tab, int *ptr)
{
	int		rank;
	char	*str;
	int		index;

	index = 0;
	str = ft_itoa(ft_atoi(nbr));
	rank = ft_power(1000, ft_nb_len(ft_atoi(nbr)) / 3);
	if (ft_nb_len(ft_atoi(nbr)) % 3 == 1)
		index = sep_nbr_first(tab, str, rank, ptr);
	else if (ft_nb_len(ft_atoi(nbr)) % 3 == 2)
		index = sep_nbr_two_first(tab, str, rank, ptr);
	rank /= 1000;
	while (str[index])
	{
		print_hundred(tab, str, index, ptr);
		sep_nbr_tens(tab, str, index, ptr);
		if (rank >= 1000)
		{
			if (boolean_rank(str, index) == 1)
				browse_tab(tab, ft_itoa(rank), ptr);
			rank /= 1000;
		}
		index += 3;
	}
	free(str);
}
