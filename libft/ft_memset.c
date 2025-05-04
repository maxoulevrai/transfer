/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:52:06 by maleca            #+#    #+#             */
/*   Updated: 2025/04/24 19:34:56 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int val, size_t siz)
{
	size_t	i;

	i = 0;
	while (i < siz)
	{
		((unsigned char *)ptr)[i] = (unsigned char)val;
		i++;
	}
	return (ptr);
}
