CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS =  ft_printf.c \
		ft_printf_utils.c \
		ft_dectohex.c \
		ft_nbrlen.c \
		ft_printargs.c \
		ft_print_c.c \
		ft_print_s.c \
		ft_print_p.c \
		ft_print_int.c \
		ft_print_u.c \
		ft_print_hex.c

OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a
LIBFT = ./Libft/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT) :
	$(MAKE) -C Libft/

$(NAME) : $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@ -I Libft/

clean:
	$(MAKE) clean -C Libft/
	rm -f $(OBJS)

fclean: clean
	$(MAKE) fclean -C Libft/
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re