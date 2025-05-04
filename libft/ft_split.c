/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:39:50 by maleca            #+#    #+#             */
/*   Updated: 2025/04/29 00:11:01 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_len(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

size_t	word_count(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else if (str[i])
		{
			count++;
			i += word_len(&str[i], c);
		}
	}
	return (count);
}

char	*ft_strdup_split(char *src, char c)
{
	size_t	i;
	char	*dst;

	i = 0;
	if (!src)
		return (NULL);
	dst = malloc(sizeof(char) * (word_len(src, c) + 1));
	if (!dst)
		return (NULL);
	while (src[i] && src[i] != c)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

void	free_split(char **split, size_t top)
{
	size_t	i;

	i = 0;
	while (i < top)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**ft_split(const char *str, char c)
{
	char	**split;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	split = malloc(sizeof(char *) * (word_count(str, c) + 1));
	if (!split)
		return (NULL);
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else if (str[i])
		{
			split[j++] = ft_strdup_split((char *)&str[i], c);
			if (!split[j - 1])
				return (free_split(split, j), NULL);
			i += word_len((char *)&str[i], c);
		}
	}
	split[j] = NULL;
	return (split);
}

// int	main(int ac, char **av)
// {
// 	char	**split = NULL;
// 	size_t	i = 0;

// 	(void)ac;
// 	split = ft_split(av[1], av[2][0]);
// 	while (i <= 2)
// 	{
// 		printf("%s\n", split[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (split[i])
// 	{
// 		free(split[i]);
// 		i++;
// 	}
// 	free(split);
// 	return (0);
// }
