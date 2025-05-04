/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:22:12 by maleca            #+#    #+#             */
/*   Updated: 2025/04/27 15:30:01 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int val, size_t siz)
{
	size_t	i;

	i = 0;
	while (i < siz)
	{
		if (((unsigned char *)ptr)[i] == (unsigned char)val)
			return ((unsigned char *)&ptr[i]);
		i++;
	}
	return (NULL);
}
