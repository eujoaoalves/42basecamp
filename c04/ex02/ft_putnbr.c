/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavitor <joavitor@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 13:53:16 by joavitor          #+#    #+#             */
/*   Updated: 2021/06/17 00:17:08 by joavitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_specific(int nb);

void	ft_putnbr(int nb)
{
	char	n_print[10];
	int		i;
	int		number;

	number = nb;
	i = 0;
	ft_print_specific(nb);
	if (nb < 0 && nb != -2147483648)
	{
		number = nb *(-1);
		write(1, "-", 1);
	}
	while (number > 0)
	{
		n_print[i] = (number % 10) + '0';
		number /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write (1, &n_print[i], 1);
		i--;
	}
}

void	ft_print_specific(int nb)
{
	if (nb == 0)
		write (1, "0", 1);
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
}
