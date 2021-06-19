/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavitor <joavitor@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 22:16:23 by joavitor          #+#    #+#             */
/*   Updated: 2021/06/18 22:16:24 by joavitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	rows;
	int	colums;

	rows = 1;
	while (rows < argc)
	{
		colums = 0;
		while (argv[rows][colums] != '\0')
		{
			write (1, &argv[rows][colums], 1);
			colums++;
		}
		write(1, "\n", 1);
		rows++;
	}
}
