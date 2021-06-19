/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavitor <joavitor@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 13:56:56 by joavitor          #+#    #+#             */
/*   Updated: 2021/06/13 13:56:57 by joavitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int number)
{
	char	print_vector[2];

	if (number <= 9)
	{
		print_vector[0] = '0';
		print_vector[1] = number + '0';
	}
	else if (number <= 99)
	{
		print_vector[0] = (number / 10) + '0';
		print_vector[1] = (number % 10) + '0';
	}
	write(1, &print_vector, 2);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	second = 1;
	while (first <= 98)
	{
		while (second <= 99)
		{
			if (first != second)
			{
				ft_print(first);
				write(1, " ", 1);
				ft_print(second);
				if (first != 98)
					write (1, ", ", 2);
				second++;
			}
		}
		first++;
		second = first + 1;
	}
}
