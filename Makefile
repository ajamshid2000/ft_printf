NAME = libftprintf.a

SRC = srcs/ft_strcpy.c \
      srcs/ft_printf.c \
      srcs/ft_put_unsigned_decimal.c \
      srcs/ft_putchar.c \
      srcs/ft_puthexa.c \
      srcs/ft_putnumber.c \
      srcs/ft_putptr.c \
      srcs/ft_putstr.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I includes
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

