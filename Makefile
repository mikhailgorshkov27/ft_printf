# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgorshko <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/15 13:38:58 by mgorshko          #+#    #+#              #
#    Updated: 2024/12/06 17:25:31 by mgorshko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM =	rm -f

SRCS = ft_printf.c ft_count.c ft_printf_c.c ft_printf_s.c ft_printf_i.c
OBJS = $(SRCS:.c=.o)

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

all:	 $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR) 
	$(RM) $(LIBFT_DIR)/*.o

$(NAME):	$(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS) *.o

clean:
	make -C $(LIBFT_DIR) clean
	$(RM) $(OBJS)


fclean:	clean
	make -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)	
	
re: fclean all

.PHONY: all clean fclean re 
