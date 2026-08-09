NAME = ft_display_file

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS_NAME = ft_display_file ft_put_error main
SRCS = $(addsuffix .c, $(SRCS_NAME))

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
