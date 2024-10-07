/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <jdenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:34:48 by jdenis            #+#    #+#             */
/*   Updated: 2023/02/25 13:52:24 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
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
	if (s == NULL)
		return (0);
	while (src[i])
	{
		s[i] = src[i];
		i++;
	}
	return (s);
}

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	t_stock_str	*tab_struc;
	int			i;

	if (argc < 1)
		argc = 0;
	tab_struc = malloc((argc + 1) * sizeof(t_stock_str));
	if (!tab_struc)
		return (NULL);
	i = 0;
	while (i < argc)
	{
		tab_struc[i].size = ft_strlen(argv[i]);
		tab_struc[i].str = argv[i];
		tab_struc[i].copy = ft_strdup(argv[i]);
		i++;
	}
	tab_struc[i].str = 0;
	return (tab_struc);
}
