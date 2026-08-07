/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 00:02:27 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/07 00:35:38 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

typedef struct	s_point{
	int	x;
	int	y;
}	t_point;

struct	s_string
{
	char	*str;
	int		size;
}	string;

struct s_rectangle
{
	t_point	top_left;
	t_point	bottom_right;
};

int	main(void)
{
	t_point	p;

	p.x = 42;
	p.y = 42;

	string.str = "Hello Hola!";
	string.size = 11;

	struct s_string sss = {"Ola Mundo!", 10};

	struct s_rectangle rect;
	rect.top_left.x = 0;
	rect.top_left.y = 0;
	rect.bottom_right.x = 10;
	rect.bottom_right.y = 10;

	//struct Rectangle rect = {{0, 0}, {10, 10}};
	
	struct s_point points[3];
	points[0].x = 1;
	points[0].y = 2;
	points[1].x = 3;
	points[1].y = 4;
	points[2].x = 5;
	points[2].y = 6;

	printf("x: %d\ny: %d\n\n", p.x, p.y);
	printf("string: %s\nsize: %d\n\n", string.str, string.size);
	printf("string sss: %s\nsize sss: %d\n\n", sss.str, sss.size);
	printf("top_left.x: %d\n", rect.top_left.x);
	printf("top_left.y: %d\n", rect.top_left.y);
	printf("bottom_right.x: %d\n", rect.bottom_right.x);
	printf("bottom_right.y: %d\n\n", rect.bottom_right.y);
	
	for (int i = 0; i < 3; i++)
		printf("Pos: %d\npoints.x: %d\npoints.y: %d\n\n", i, points[i].x, points[i].y);
	return (0);
}
