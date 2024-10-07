/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sep_nbr2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <jdenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:06:56 by jdenis            #+#    #+#             */
/*   Updated: 2023/02/26 13:46:18 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_itoa(int nb);
int		browse_tab(char **tab, char *nbr, int *ptr );
int		boolean_rank(char *str, int index);

int	sep_nbr_first(char **tab, char *str, int rank, int *ptr )
{
	char	tmp[3];

	tmp[0] = str[0];
	tmp[1] = 0;
	tmp[2] = 0;
	browse_tab(tab, tmp, ptr);
	if (rank >= 1000)
		browse_tab(tab, ft_itoa(rank), ptr);
	return (1);
}

int	sep_nbr_two_first(char **tab, char *str, int rank, int *ptr )
{
	char	tmp[3];

	if (str[0] >= '2')
	{
		tmp[0] = str[0];
		tmp[1] = '0';
		tmp[2] = '\0';
		browse_tab(tab, tmp, ptr);
		tmp[0] = str[1];
		tmp[1] = '\0';
		tmp[2] = '\0';
		if (str[1] != '0')
			browse_tab(tab, tmp, ptr);
	}
	else
	{
		tmp[0] = str[0];
		tmp[1] = str[1];
		tmp[2] = 0;
		browse_tab(tab, tmp, ptr);
	}
	if (rank >= 1000)
		browse_tab(tab, ft_itoa(rank), ptr);
	return (2);
}

void	sep_nbr_hundreds(char **tab, char *str, int index, int *ptr )
{
	char	tmp[3];

	tmp[0] = str[index];
	tmp[1] = 0;
	tmp[2] = 0;
	browse_tab(tab, tmp, ptr);
	browse_tab(tab, "100", ptr);
}

void	func_tens(char *str, int index, char **tab, int *ptr)
{
	char	tmp[3];

	tmp[0] = 0;
	tmp[0] = str[index + 1];
	tmp[1] = '0';
	tmp[2] = 0;
	browse_tab(tab, tmp, ptr);
	tmp[0] = str[index + 2];
	tmp[1] = 0;
	tmp[2] = 0;
	if (str[index + 2] != '0')
		browse_tab(tab, tmp, ptr);
}

void	sep_nbr_tens(char **tab, char *str, int index, int *ptr )
{
	char	tmp[3];

	tmp[0] = '\0';
	if (str[index + 1] >= '2')
	{
		func_tens(str, index, tab, ptr);
	}
	else
	{
		if (str[index + 1] != '0')
		{
			tmp[0] = str[index + 1];
			tmp[1] = str[index + 2];
		}
		else
		{
			if (str[index + 2] != '0')
			{
				tmp[0] = str[index + 2];
				tmp[1] = 0;
			}
		}
		if (boolean_rank(str, index) == 1)
			browse_tab(tab, tmp, ptr);
	}
}
