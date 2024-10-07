/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <jdenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:51:39 by jdenis            #+#    #+#             */
/*   Updated: 2023/02/27 19:15:57 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		get_opera(char *operator);
int		op_valid(char *operator, char *b);
void	do_op(char *a, char *operator, char *b);
void	ft_putnbr(int nbr);
void	ft_putchar(char c);
int		ft_atoi(char *str);
int		add(int a, int b);
int		sub(int a, int b);
int		div(int a, int b);
int		time(int a, int b);
int		mod(int a, int b);

#endif