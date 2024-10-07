/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducobu <aducobu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:04:47 by aducobu           #+#    #+#             */
/*   Updated: 2023/02/26 17:54:28 by aducobu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

char	*ft_strdup(char *src);

int	ft_len_read(char *file)
{
	int		fd;
	int		len;
	char	c;

	len = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, &c, 1))
		len++;
	close(fd);
	return (len);
}

char	*ft_read_dict(char *file)
{
	int		fd;
	char	*res;
	char	c;
	int		i;

	i = 0;
	res = malloc(sizeof(char) * (ft_len_read(file) + 1));
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (NULL);
	while (read(fd, &c, 1))
		res[i++] = c;
	res[i] = '\0';
	close(fd);
	return (res);
}
