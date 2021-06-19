/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavitor <joavitor@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 13:54:19 by joavitor          #+#    #+#             */
/*   Updated: 2021/06/16 17:02:29 by joavitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	int				size_dest;

	size_dest = 0;
	count = 0;
	while (dest[size_dest] != '\0')
	{
		size_dest++;
	}
	while (count < nb && src[count] != '\0')
	{
		dest[size_dest + count] = src[count];
		count++;
	}
	dest[size_dest + count] = '\0';
	return (dest);
}
