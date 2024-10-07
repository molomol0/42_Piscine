/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:06:39 by jdenis            #+#    #+#             */
/*   Updated: 2023/02/14 12:42:11 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include <bsd/string.h>

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_dest;
	unsigned int	len_src;

	i = ft_strlen(dest);
	j = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size < 1)
		return (len_src + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < len_dest)
		return (len_src + size);
	else
		return (len_dest + len_src);
}

/*
int main(void)
{
	char a[] = "mec";
	char b[15] = "bonjour";
	printf("ma func :%d\n", ft_strlcat(b, a, 14));
	printf("la func :%ld\n", strlcat(b, a, 14));
	return (0);
}
*/
