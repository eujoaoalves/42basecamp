/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavitor <joavitor@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 13:56:30 by joavitor          #+#    #+#             */
/*   Updated: 2021/06/13 13:56:31 by joavitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	z;
	int	letter;

	z = 96;
	letter = 122;
	while (letter != z)
	{
		write(1, &letter, 1);
		letter--;
	}
}
