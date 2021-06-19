/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavitor <joavitor@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 13:59:53 by joavitor          #+#    #+#             */
/*   Updated: 2021/06/13 13:59:54 by joavitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	f;
	int	aux;

	f = size - 1;
	index = 0;
	while (index < f)
	{
		aux = tab[index];
		tab[index] = tab[f];
		tab[f] = aux;
		f--;
		index++;
	}
}
