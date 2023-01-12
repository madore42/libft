NAME = libft.a
SRC =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c
OBJ = $(SRC:%.c=%.o)
MAIN = test
CFLAGS = -Wall -Werror -Wextra
all : $(NAME) 
	
$(NAME) : $(OBJ) 
	ar -rcs $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

re : clean 
	make

$(MAIN): $(NAME)
	gcc $(CFLAGS) $(NAME) main.c -o test

fclean : clean
	rm -f $(NAME)

exe : $(MAIN)
	./test