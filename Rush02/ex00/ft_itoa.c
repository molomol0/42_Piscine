/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducobu <aducobu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 07:56:12 by aducobu           #+#    #+#             */
/*   Updated: 2023/02/26 16:42:08 by aducobu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strdup(char *src);
int		ft_nb_len(int nb);

void	ft_strrev(char *str)
{
	int		i;
	char	tmp;

	i = 0;
	while (i < ft_strlen(str) / 2)
	{
		tmp = str[i];
		str[i] = str[ft_strlen(str) - 1 - i];
		str[ft_strlen(str) - 1 - i] = tmp;
		i++;
	}
}

char	*ft_itoa(unsigned long int nb)
{
	int					i;
	unsigned long int	n;
	char				res[33];
	char				*ret_str;

	i = 0;
	n = (unsigned long int)nb;
	if (n < 0)
		n = -n;
	if (n == 0)
		res[i++] = '0';
	else
	{
		while (n)
		{
			res[i++] = (n % 10) + 48;
			n = n / 10;
		}
		if (nb < 0)
			res[i++] = '-';
	}
	res[i] = '\0';
	ft_strrev(res);
	ret_str = ft_strdup(res);
	return (ret_str);
}
