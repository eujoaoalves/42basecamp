/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavitor <joavitor@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 22:16:16 by joavitor          #+#    #+#             */
/*   Updated: 2021/06/18 22:16:17 by joavitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	rows;
	int	colums;

	rows = 0;
	colums = 0;
	if (argc > 0)
	{
		while (argv[rows][colums] != '\0')
		{
			write (1, &argv[rows][colums], 1);
			colums++;
		}
		write (1, "\n", 1);
	}
}
