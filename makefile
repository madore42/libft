# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: madore <madore@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/31 14:36:15 by madore            #+#    #+#              #
#    Updated: 2023/02/05 15:34:26 by madore           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
BONUS = libft_bonus.a
SRC =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c

SRC_BONUS =	ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstmap_bonus.c

OBJ = $(SRC:%.c=%.o)
OBJ_BONUS = $(SRC_BONUS:%.c=%.o)
MAIN = test
CC = gcc
CFLAGS = -Wall -Werror -Wextra
all : $(NAME) 
	
$(NAME) : $(OBJ) 
	ar -rcs $(NAME) $(OBJ)
	
bonus : $(BONUS)

$(BONUS) : $(OBJ_BONUS) $(OBJ)
	ar -rcs $(BONUS) $(OBJ_BONUS) $(OBJ)

clean :
	rm -f $(OBJ)
	rm -f $(OBJ_BONUS)
re : clean 
	make

fclean : clean
	rm -f $(NAME)
	rm -f $(BONUS)

$(MAIN): $(NAME)
	gcc $(CFLAGS) $(NAME) main.c -o test

exe: $(MAIN)
	./test

.PHONY: all clean fclean re bonus