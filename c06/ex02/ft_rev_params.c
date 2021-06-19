/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavitor <joavitor@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 22:16:27 by joavitor          #+#    #+#             */
/*   Updated: 2021/06/18 22:16:28 by joavitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char *argv[])
{
	int	rows;
	int	columns;

	rows = (argc - 1);
	while (rows > 0)
	{
		columns = 0;
		while (argv[rows][columns] != '\0')
		{
			write(1, &argv[rows][columns], 1);
			columns++;
		}
		write (1, "\n", 1);
		rows--;
	}
}
