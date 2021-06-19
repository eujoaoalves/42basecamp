/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavitor <joavitor@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 12:59:33 by joavitor          #+#    #+#             */
/*   Updated: 2021/06/17 16:37:32 by joavitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count;
	int	result;
	int	number;
	int	sub;

	count = 0;
	result = nb;
	number = 0;
	sub = 1;
	while (result > 0 )
	{
		result = result - sub;
		count++;
		sub += 2;
	}
	if ((count * count) == nb)
	{
		return (count);
	}
	else
		return (0);
}
