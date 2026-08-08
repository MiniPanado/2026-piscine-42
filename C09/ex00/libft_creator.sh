#!/bin/sh

cc -Wall -Wextra -Werror -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rc libft.a ft_strlen.o ft_putstr.o ft_swap.o ft_strcmp.o ft_putchar.o
rm -f ft_strlen.o ft_putstr.o ft_swap.o ft_strcmp.o ft_putchar.o
