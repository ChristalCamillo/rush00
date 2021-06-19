#include <stdio.h>
#include <unistd.h>
#define CORNER_A 'A'
#define CORNER_C 'C'
void	ft_putchar(char c);

void	rush02(int x, int y)
{
	int	x_c;
	int	y_c;

	if (x < 1 || y < 1)
		return ;
	y_c = 1;
	while (y_c <= y)
	{
		x_c = 1;
		while (x_c <= x)
		{
			if ((x_c > 1 && x_c < x) && (y_c > 1 && y_c < y))
				ft_putchar(' ');
			else if (((x_c > 1 && x_c < x) && (y_c == 1 || y_c == y))
				|| ((y_c > 1 && y_c < y) && (x_c == 1 || x_c == x)))
				ft_putchar('B');
			else if (((x_c == 1 && y_c == 1) || (y_c == 1 && x_c == x)))
				ft_putchar(CORNER_A);
			else
				ft_putchar(CORNER_C);
			x_c++;
		}
		ft_putchar('\n');
		y_c++;
	}
}
