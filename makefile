# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ozahdi <ozahdi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 08:57:33 by ozahdi            #+#    #+#              #
#    Updated: 2023/12/01 15:01:19 by ozahdi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_putchar.c ft_putnbr_adr.c ft_putnbr_hex.c ft_putnbr_uns.c ft_putnbr.c ft_putstr.c print_format.c ft_printf.c\

NAME	=	libftprintf.a

CC		=	cc

RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

OBJS	=	${SRCS:.c=.o}

${NAME}	:	${OBJS}
			ar rcs ${NAME} ${OBJS}
			
%.o		: %.c  libftprintf.a
		$(CC) $(CFLAGS) -c $< -o $@

all		:	${NAME}

clean	:	${RM} ${OBJS}

fclean	:	clean
			${RM} ${NAME}

re		:	fclean all

.PHONY	:	all clean fclean re