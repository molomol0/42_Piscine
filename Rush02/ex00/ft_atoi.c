/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducobu <aducobu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 07:49:03 by aducobu           #+#    #+#             */
/*   Updated: 2023/02/26 17:54:36 by aducobu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long int	ft_atoi(char *nbr)
{
	unsigned long int	res;
	int					sign;
	int					compteur;

	res = 0;
	sign = 1;
	compteur = 0;
	while (*nbr == ' ')
		nbr++;
	if (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			return (-1);
		nbr++;
	}
	if (*nbr == ' ')
		return (-1);
	while (*nbr >= '0' && *nbr <= '9')
	{
		compteur++;
		res = res * 10 + (*nbr++ - 48);
	}
	if (compteur > 64)
		return (-1);
	return (res);
}
