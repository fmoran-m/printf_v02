NAME = libftprintf.a
LIBFT = ./libft/libft.a
LIBFTDIR = ./libft
CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs
SRC = ft_printf.c ft_putstr_pf.c ft_putnbr_pf.c ft_putchar_pf.c ft_putptr_pf.c ft_put_lower_hex_pf.c ft_put_upper_hex_pf.c ft_putunbr_pf.c

OBJS = ${SRC:.c=.o}

$(NAME): $(OBJS)
		make -C $(LIBFTDIR)
		cp $(LIBFT) $(NAME)
		$(AR) $(NAME) $(OBJS)

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)
	cd $(LIBFTDIR) && make clean

fclean: clean
		$(RM) $(NAME)
		cd $(LIBFTDIR) && make fclean

re: fclean all
