# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: curtman <cdapurif@student.42.fr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/23 20:12:41 by curtman           #+#    #+#              #
#    Updated: 2021/04/27 15:25:36 by curtman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cub3D

SRCS =	cub3d.c \
		get_next_line.c \
		get_next_line_utils.c \
		get_next_line_utils2.c \
		parsing.c \
		parsing2.c \
		parsing3.c

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

FT = -L libft -lft

MLX = -I /usr/local/include -L /usr/local/lib -lmlx

FW = -framework OpenGL -framework AppKit

RM = rm -f

GREEN = \x1b[32m
RESET = \e[0m

all: $(NAME)

$(NAME): $(OBJS)
	@#echo "\n\033[36mCreation :\033[0m \033[35;4m$(NAME)\033[0m\n"
	make -C libft/
	$(CC) $(CFLAGS) -g $(FT) $(MLX) $(FW) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	make -C libft/ clean

fclean: clean
	$(RM) $(NAME)
	make -C libft/ fclean

re: fclean all

.PHONY: all clean fclean re

#.SILENT: $(OBJS) $(NAME) clean fclean
