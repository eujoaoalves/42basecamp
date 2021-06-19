/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavitor <joavitor@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 14:00:08 by joavitor          #+#    #+#             */
/*   Updated: 2021/06/13 14:00:09 by joavitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	end;
	int	j;
	int	aux;

	j = 0;
	end = size - 1;
	index = 0;
	while (index < end)
	{
		j = index + 1;
		while (j < size)
		{
			if (tab[index] > tab[j])
			{
				aux = tab[index];
				tab[index] = tab[j];
				tab[j] = aux;
			}
			j++;
		}
		index++;
	}
}
