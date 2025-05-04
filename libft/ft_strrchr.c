/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:14:22 by maleca            #+#    #+#             */
/*   Updated: 2025/04/26 21:28:18 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int val)
{
	int		i;
	char	c;

	i = ft_strlen(str);
	c = (char)val;
	if (c == '\0')
		return ((char *)&str[i]);
	i--;
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*str = "bonjour";

// 	printf("%s\n", ft_strrchr(str, 'b'));
// 	return (0);
// }
