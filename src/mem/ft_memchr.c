/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:41:18 by vde-frei          #+#    #+#             */
/*   Updated: 2024/03/18 22:24:11 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	letter;
	unsigned char	*string;
	size_t			index;

	letter = (unsigned char)c;
	string = (unsigned char *)s;
	index = 0;
	while (n--)
	{
		if (string[index] == letter)
			return (string + index);
		index++;
	}
	return (NULL);
}
