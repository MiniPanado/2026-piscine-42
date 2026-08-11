PROGRAM = ft_cat

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS_NAME = main ft_strlen ft_display_file
SRCS = $(addsuffix .c, $(SRCS_NAME))

OBJS = $(SRCS:.c=.o)

RM = rm -f

all: $(PROGRAM)

$(PROGRAM): $(OBJS)
	$(CC) $(CFLAGS) -o $(PROGRAM) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c  -o $@ $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(PROGRAM)
