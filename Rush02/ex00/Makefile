# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aducobu <aducobu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/25 08:56:04 by aducobu           #+#    #+#              #
#    Updated: 2023/02/26 17:09:37 by aducobu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= browse_tab.c check_arg.c double_in_dict.c ft_atoi.c ft_itoa.c ft_nb_len.c ft_power.c ft_putchar.c ft_putstr.c ft_read_dict.c ft_split.c ft_strdup.c ft_strlen.c main.c resolve.c sep_nbr.c sep_nbr2.c

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${SRCS}
			
all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all