/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formula.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <jdenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:48:55 by jdenis            #+#    #+#             */
/*   Updated: 2023/02/27 19:14:15 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	add(int a, int b)
{
	return (a + b);
}

int	sub(int a, int b)
{
	return (a - b);
}

int	div(int a, int b)
{
	return (a / b);
}

int	time(int a, int b)
{
	return (a * b);
}

int	mod(int a, int b)
{
	return (a % b);
}
