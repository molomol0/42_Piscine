/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <jdenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:19:51 by jdenis            #+#    #+#             */
/*   Updated: 2023/03/01 19:44:16 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	get_opera(char *operator)
{
	int		i;
	char	*all_op;

	i = 0;
	all_op = "+-/*%";
	while (all_op[i])
	{
		if (all_op[i] == operator[0] && operator[1] == 0)
			return (i);
		i++;
	}
	return (-1);
}

int	op_valid(char *operator, char *b)
{
	if (operator[0] == '/' && b[0] == '0' && b[1] == 0)
	{
		write(1, "Stop : division by zero", 24);
		write(1, "\n", 1);
		return (0);
	}
	else if (operator[0] == '%' && b[0] == '0' && b[1] == 0)
	{
		write(1, "Stop : modulo by zero", 22);
		write(1, "\n", 1);
		return (0);
	}
	else
		return (1);
}

void	do_op(char *a, char *operator, char *b)
{
	int	(*tab[5])(int, int);
	int	tmp;

	tab[0] = add;
	tab[1] = sub;
	tab[2] = div;
	tab[3] = time;
	tab[4] = mod;
	tmp = get_opera(operator);
	if (tmp != -1)
	{
		if (op_valid(operator, b) == 1)
			ft_putnbr(tab[tmp](ft_atoi(a), ft_atoi(b)));
		write(1, "\n", 1);
	}
	else
	{
		ft_putnbr(0);
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		do_op(argv[1], argv[2], argv[3]);
	}
	return (0);
}
