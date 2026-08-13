NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -Iincludes
AR = ar rcs
RM = rm -f

SRCS_DIR = srcs
SRC_NAMES = ft_putchar ft_swap ft_putstr ft_strlen ft_strcmp
SRCS = $(addprefix $(SRCS_DIR)/, $(addsuffix .c, $(SRC_NAMES)))

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
