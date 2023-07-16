CC		= cc
CFLAGS	= -Wall -Wextra -Werror
NAME	= libftprintf.a
SRCS	= ft_printf.c ft_putstr_len.c ft_putnbr_len.c ft_putunsigned_len.c ft_putchar_len.c ft_puthex_len.c ft_putptr_len.c
OBJS	= $(SRCS:c=o)

%.o:%.c ft_printf.h
	$(CC) $(CFLAGS) -c $<

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONEY: all clean fclean re
