# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marinamamedova <marinamamedova@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/13 23:32:54 by elman             #+#    #+#              #
#    Updated: 2021/07/14 23:52:38 by marinamamed      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_dop_funcs.c ft_printf.c ft_print_ch.c ft_print_d.c\
	ft_print_s.c ft_print_ptr.c ft_print_u.c\
	ft_print_xX.c

OBJ = $(SRC:%.c=%.o)

HEADER = ft_printf.h

FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re bonus

.c.o:
	gcc $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJ)
	@ ar rcs $(NAME) $(OBJ) $(HEADER)
	@make -C ./libft
	@cp ./libft/libft.a $(NAME)
	@ar rcs $(NAME)  $?

all: $(NAME)

bonus: $(NAME)

clean:
	@make -C ./libft clean
	@rm -f $(OBJ)

fclean: clean
	@make -C ./libft fclean 
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re


 