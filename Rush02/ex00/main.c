/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <jdenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 09:01:57 by aducobu           #+#    #+#             */
/*   Updated: 2023/02/26 17:58:39 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	check_nbr(char *nbr);
int	check_args(int argc, char **argv);
int	resolve(char *file, char *nbr);

int	main(int argc, char **argv)
{
	char	*file;

	file = "numbers.dict";
	if (check_args(argc, argv) == 1)
	{
		if (argc == 3)
		{
			if (resolve(argv[1], argv[2]) == 0)
				write(1, "Dict Error\n", 11);
		}
		else if (argc == 2)
		{
			if (resolve(file, argv[1]) == 0)
				write(1, "Dict Error\n", 11);
		}
	}
	else
	{
		write(1, "Error\n", 6);
	}
	return (0);
}
