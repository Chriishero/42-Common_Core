CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS =  src/ft_printf.c \
		src/ft_printargs.c \
		src/ft_putcount.c \
		src/ft_dectohex.c

OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a
LIBFT = ./Libft/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT) :
	$(MAKE) -C Libft/

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@ -I Libft/

$(NAME) : $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

clean:
	$(MAKE) clean -C Libft/
	rm -f $(OBJS)

fclean: clean
	$(MAKE) fclean -C Libft/
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re