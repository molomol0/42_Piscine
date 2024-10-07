/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <jdenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 10:19:13 by aducobu           #+#    #+#             */
/*   Updated: 2023/02/26 17:57:52 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long int	ft_atoi(char *nbr);

int	check_nbr(char *nbr)
{
	int	i;

	i = 0;
	while (nbr[i] && nbr[i] == ' ')
		i++;
	if (nbr[i] == '+')
		i++;
	while (nbr[i] >= '0' && nbr[i] <= '9')
		i++;
	while (nbr[i] && nbr[i] == ' ')
		i++;
	if (nbr[i])
		return (0);
	if (ft_atoi(nbr) > 4294967295)
		return (0);
	return (1);
}

int	check_args(int argc, char **argv)
{
	int	ret_value;

	ret_value = 0;
	if (argc < 2 || argc > 3)
		return (0);
	else if (argc == 2)
		ret_value = check_nbr(argv[1]);
	else if (argc == 3)
		ret_value = check_nbr(argv[2]);
	return (ret_value);
}
