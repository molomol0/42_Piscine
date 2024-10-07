/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 08:02:49 by jdenis            #+#    #+#             */
/*   Updated: 2023/02/12 10:30:29 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	change(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
		{
			if (!(str[i - 1] <= 'Z' && str[i - 1] >= 'A'))
			{
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
				{
					str[i] -= 32;
				}
			}
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		change(str, i);
		i++;
	}
	return (str);
}
