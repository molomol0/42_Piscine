/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_in_dict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducobu <aducobu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 09:07:32 by aducobu           #+#    #+#             */
/*   Updated: 2023/02/26 17:05:21 by aducobu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *nbr);

int	double_in_dict(char **tab)
{
	int	i;
	int	j;
	int	i_value;
	int	j_value;

	i = 0;
	while (tab[i + 1])
	{
		i_value = ft_atoi(tab[i]);
		j = i + 1;
		while (tab[j])
		{
			j_value = ft_atoi(tab[j]);
			if (i_value == j_value)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
