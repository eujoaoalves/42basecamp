/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavitor <joavitor@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 18:09:43 by joavitor          #+#    #+#             */
/*   Updated: 2021/06/17 02:06:47 by joavitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	else
	{
		if (nb == 1 || nb == 0)
			return (1);
		else
		{
			result = ft_recursive_factorial(nb - 1) * nb;
		}
		return (result);
	}
}
