/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavitor <joavitor@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 22:16:34 by joavitor          #+#    #+#             */
/*   Updated: 2021/06/18 22:16:35 by joavitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_print_str(int argc, char **argv);

int	main(int argc, char *argv[])
{
	int		rows;
	int		next_rows;
	char	*aux;

	rows = 0;
	while (rows < argc)
	{
		next_rows = rows + 1;
		while (next_rows < argc)
		{
			if (ft_strcmp(argv[rows], argv[next_rows]) > 0)
			{
				aux = argv[rows];
				argv[rows] = argv[next_rows];
				argv[next_rows] = aux;
			}
			next_rows++;
		}
		rows++;
	}
	ft_print_str(argc, argv);
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	rows;

	rows = 0;
	while ((s1[rows] != '\0' || s2[rows] != '\0') && (s1[rows] == s2[rows]))
		rows++;
	return ((unsigned char)s1[rows] - (unsigned char)s2[rows]);
}

void	ft_print_str(int argc, char **argv)
{
	int	rows;
	int	colums;

	rows = 1;
	while (rows < argc)
	{
		colums = 0;
		while (argv[rows][colums] != '\0')
		{
			write(1, &argv[rows][colums], 1);
			colums++;
		}
		write(1, "\n", 1);
		rows++;
	}
}
