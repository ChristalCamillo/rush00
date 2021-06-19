#include <stdio.h>
#include <unistd.h>
void	ft_putchar(char caractere)
{
	write(1, &caractere, 1);
}
