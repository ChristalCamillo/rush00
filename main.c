#include <stdio.h>
#include <unistd.h>

void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);
int		obterValorY(int y);
int		obterValorX(int x);
int		chamarFuncaoRush(int rush, int x, int y);
int		imprimirOpcoesIniciais(void);
int		obterNumeroRush(void);

int	main(void)
{
	int	x;
	int	y;
	int	rush;

	rush = -2;
	while (rush != -1)
	{
		rush = obterNumeroRush();
		if (rush != -1)
		{
			x = obterValorX(x);
			y = obterValorY(y);
			chamarFuncaoRush(rush, x, y);
		}
	}
	return (0);
}

int	obterNumeroRush(void)
{
	int	n_rush;

	printf("\nEscolha o número do desafio rush\n\n");
	printf("Rush 0\n");
	printf("Rush 1\n");
	printf("Rush 2\n");
	printf("Rush 3\n");
	printf("Rush 4\n\n");
	printf("Sair -1\n");
	printf("BUUM qualquer letra ;)\n\n");
	n_rush = -2;
	while (n_rush < -1 || n_rush > 4)
	{
		printf("Digite um número: ");
		scanf("%d", &n_rush);
		if (n_rush == -1)
			return (n_rush);
		if (n_rush < -1 || n_rush > 4)
			printf("\nEscolha um número entre 0 e 4 ou -1 para sair\n\n");
	}
	printf("\nRush 0%d escolhido!\n", n_rush);
	return (n_rush);
}

int	chamarFuncaoRush(int rush, int x, int y)
{
	printf("\nA função retornou o código abaixo\n\n");
	if (rush == 0)
		rush00(x, y);
	else if (rush == 1)
		rush01(x, y);
	else if (rush == 2)
		rush02(x, y);
	else if (rush == 3)
		rush03(x, y);
	else if (rush == 4)
		rush04(x, y);
	return (0);
}

int	obterValorX(int x)
{
	printf("\nDigite o valor de X: ");
	scanf("%d", &x);
	return (x);
}

int	obterValorY(int y)
{
	printf("\nDigite o valor de Y: ");
	scanf("%d", &y);
	return (y);
}
