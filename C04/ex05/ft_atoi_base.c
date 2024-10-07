/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:09:27 by jdenis            #+#    #+#             */
/*   Updated: 2023/02/15 14:16:44 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_in_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

int	ft_baselen(char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| ft_in_base(base[i], base + i + 1) >= 0
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	res;
	int	signe;
	int	size;

	size = ft_baselen(base);
	if (size <= 1)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	signe = 0;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			signe = 1 - signe;
	res = 0;
	i = ft_in_base(*str, base);
	while (i >= 0)
	{
		res = res * size + i;
		str++;
		i = ft_in_base(*str, base);
	}
	if (signe > 0)
		res = res * -1;
	return (res);
}
/*
int	main(void)
{
	printf("42:%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	printf("-42:%d\n", ft_atoi_base("   --------+-2a", "0123456789abcdef"));
	printf("42:%d\n", ft_atoi_base("   -+-2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+- 2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-z", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", ""));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "+-0"));
	printf("0:%d\n", ft_atoi_base("   -+-2a", "0123456789abcdef1"));
	return (0);
}
*/
