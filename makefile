# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ozahdi <ozahdi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 08:57:33 by ozahdi            #+#    #+#              #
#    Updated: 2023/12/01 19:19:55 by ozahdi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	ft_putchar.c ft_putnbr_adr.c ft_putnbr_hex.c ft_putnbr_uns.c ft_putnbr.c ft_putstr.c print_format.c ft_printf.c\

NAME= libftprintf.a
CC= CC
CFLAGS= -Wall -Wextra -Werror

	
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	
%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ)
 
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean