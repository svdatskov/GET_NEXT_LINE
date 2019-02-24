NAME = libft.a

SOURCE = *.c \
   

HEADER = libft.h

LIB = *.o \
   

all : $(NAME)

$(NAME):
	@gcc -c -Wall -Wextra -Werror $(SOURCE) -I $(HEADER)
	@ar rc $(NAME) $(LIB)

clean:
	@/bin/rm -f $(LIB)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all