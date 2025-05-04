/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:31:03 by maleca            #+#    #+#             */
/*   Updated: 2025/04/27 15:39:38 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t siz)
{
	size_t			i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	i = 0;
	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	if (siz == 0)
		return (0);
	while (i < siz - 1)
	{
		if (ps1[i] != ps2[i])
			return (ps1[i] - ps2[i]);
		i++;
	}
	return (ps1[i] - ps2[i]);
}

// int	main(void)
// {
// 	char	*s1 = "teste";
// 	char	*s2 = "testex";

// 	printf("%d\n", ft_memcmp(s1, s2, 6));
// 	printf("%d\n", memcmp(s1, s2, 6));
// 	return (0);
// }
