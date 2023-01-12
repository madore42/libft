NAME = libft.a
SRC = ft_atoi.c
OBJ = $(SRC:%.c=%.o)
CFLAGS = -Wall -Werror -Wextra
all : $(NAME) 
	
$(NAME) : $(OBJ) 
	ar -rcs $(NAME) $(OBJ)

clean :
	rm $(OBJ)

re : clean 
	make

test: $(NAME)
	gcc $(CFLAGS) $(NAME) main.c -o test

fclean : clean
	rm -f $(NAME)