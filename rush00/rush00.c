#include <unistd.h>

void	ft_putchar(char c);
int		print_circle(int j, int i, int y, int x);
int		print_pipe(int j, int x, int i, int y);
int		print_hyphen(int j, int x, int y, int i);
int	g_i;
int	g_j;

void	rush(int x, int y)
{
	g_i = 1;
	while (g_i <= y)
	{
		g_j = 1;
		while (g_j <= x)
		{
			if ((print_circle(g_j, g_i, y, x) == 1)
				|| (print_pipe(g_j, x, g_i, y) == 1)
				|| (print_hyphen(g_j, x, y, g_i) == 1))
			{
				g_j++;
			}
			else
			{
				ft_putchar(' ');
				g_j++;
			}
		}
		if (x > 0)
		{
			write(1, "\n", 1);
		}
		g_i++;
	}
}

int	print_circle (j, i, y, x)
{
	if ((j == 1 && i == 1) || (j == x && i == 1))
	{
		ft_putchar('o');
		return (1);
	}
	else if ((j == 1 && i == y) || (j == x && i == y))
	{
		ft_putchar('o');
		return (1);
	}
	else
	{
		return (0);
	}
}

int	print_pipe (j, x, i, y)
{
	if ((j == 1 || j == x) && (i > 1 && i < y))
	{
		ft_putchar('|');
		return (1);
	}
	else
	{
		return (0);
	}
}

int	print_hyphen(j, x, y, i)
{
	 if ((j > 1 && j < x) && (i == 1 || i == y))
	{
		ft_putchar('-');
		return (1);
	}
	else
	{
		return (0);
	}
}
