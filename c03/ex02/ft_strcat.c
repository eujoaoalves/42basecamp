/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavitor <joavitor@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 13:53:44 by joavitor          #+#    #+#             */
/*   Updated: 2021/06/16 00:35:29 by joavitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size_src;
	int	size_dest;

	i = 0;
	size_src = 0;
	size_dest = 0;
	while (src[size_src] != '\0')
	{
		size_src++;
	}
	while (dest[size_dest] != '\0')
	{
		size_dest++;
	}
	while (i < size_src)
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (dest);
}
