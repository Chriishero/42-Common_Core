SRCS =  src/ft_printf.c \
		src/ft_printargs.c \
		src/ft_putcount.c \
		src/ft_dectohex.c

OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a

all: $(NAME) clean

$(NAME) : $(OBJS)
	$(MAKE) -C Libft/
	ar rcs $(NAME) $(OBJS)

clean:
	$(MAKE) clean -C Libft/
	rm -f $(OBJS)

fclean: clean
	$(MAKE) fclean -C Libft/
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re