/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavitor <joavitor@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 13:59:39 by joavitor          #+#    #+#             */
/*   Updated: 2021/06/15 10:36:52 by joavitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	original_a;

	original_a = *a;
	if (b != 0)
	{
		*a = (*a / *b);
		*b = (original_a % *b);
	}
}
