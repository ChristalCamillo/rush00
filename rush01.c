#include <stdio.h>
#include <unistd.h>
#define CORNER_A '/'
#define CORNER_C '\\'

int		escreverAsLinhas(int y_c, int y, int x_c, int x);
void	ft_putchar(char c);

void	rush01(int x, int y)
{
	int	x_c;
	int	y_c;

	if (x < 1 || y < 1)
		return ;
	y_c = 1;
	while (y_c <= y)
	{
		x_c = 1;
		escreverAsLinhas(y_c, y, x_c, x);
		ft_putchar('\n');
		y_c++;
	}
}

int	escreverAsLinhas(int y_c, int y, int x_c, int x)
{
	while (x_c <= x)
	{
		if ((x_c > 1 && x_c < x) && (y_c > 1 && y_c < y))
			ft_putchar(' ');
		else if (
			((x_c > 1 && x_c < x) && (y_c == 1 || y_c == y))
			|| ((y_c > 1 && y_c < y) && (x_c == 1 || x_c == x)))
			ft_putchar('*');
		else if ((x_c == 1 && (y_c == y && y_c > 1))
			|| (x == 1 && (y_c == y && y_c > 1)))
			ft_putchar(CORNER_C);
		else if ((x_c == x && y_c == 1) && (x != 1 && y != 1))
			ft_putchar(CORNER_C);
		else if (((x == 1 && y == 1) || (x_c == 1 && y_c == 1)))
			ft_putchar(CORNER_A);
		else if ((x_c == x && y_c == y) && (y_c != 1 && x_c != 1 ))
			ft_putchar(CORNER_A);
		x_c++;
	}
	return (7);
}
