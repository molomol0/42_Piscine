/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <jdenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:42:42 by jdenis            #+#    #+#             */
/*   Updated: 2023/02/24 00:49:04 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	comp;

	comp = 0;
	while (str[comp] != '\0')
	{
		comp++;
	}
	return (comp);
}

char	*ft_strdup(char *src)
{
	char		*s;
	int			i;

	i = 0;
	s = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!s)
		return (0);
	while (src[i])
	{
		s[i] = src[i];
		i++;
	}
	s[i] = 0;
	return (s);
}
