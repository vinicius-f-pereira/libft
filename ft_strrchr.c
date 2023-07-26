/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:49:00 by vde-frei          #+#    #+#             */
/*   Updated: 2023/07/25 22:26:41 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int	index;

	index = ft_strlen(s);
	while (*s != '\0')
	{
		if (s[index] == (unsigned char)c)
			return ((char *)(s + index));
		--index;
	}
	if (s[index] == (unsigned char)c)
		return ((char *)(s + index));
	return (NULL);
}