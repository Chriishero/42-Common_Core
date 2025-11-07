SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
NAME = libft.a

all: $(NAME) clean

# r : replace
# c : create
# s : sort
$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

# rm -f : supprime sans confirmation nécessaire
clean:
	rm -f $(OBJ)

# fclean : avec make fclean, lance clean puis rm libft.a
fclean: clean
	rm -f $(NAME)

# re : rebuild
re: fclean $(NAME)

# .PHONY : les cibles ne sont pas associés avec un fichier
.PHONY: all clean fclean re