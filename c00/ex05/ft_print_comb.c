/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavitor <joavitor@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 13:56:48 by joavitor          #+#    #+#             */
/*   Updated: 2021/06/13 13:56:49 by joavitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	while (first <= '7')
	{
		second = '0';
		while (++second <= '8')
		{
			third = '1';
			while (++third <= '9')
			{
				if ((first < second) && (second < third))
				{
					write(1, &first, 1);
					write(1, &second, 1);
					write(1, &third, 1);
					if ((first != '7'))
						write(1, ", ", 2);
				}
			}
		}
		first++;
	}
}
