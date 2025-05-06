/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 19:12:51 by maleca            #+#    #+#             */
/*   Updated: 2025/05/06 16:21:12 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen_gnl(char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

void	*ft_calloc(size_t nmemb, size_t siz)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	if (siz && nmemb > (UINT_MAX / siz))
		return (NULL);
	ptr = malloc(nmemb * siz);
	if (!ptr)
		return (NULL);
	while (i++ < nmemb * siz)
		ptr[i] = 0;
	return (ptr);
}

int	ft_strchr(char *str, char c)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin_gnl(char *stash, char *buff)
{
	char	*new_stash;
	int	i;
	int	j;

	if (!stash)
	{
		stash = ft_calloc(1, sizeof(char));
		if (!stash)
			return (NULL);
	}
	i = -1;
	j = 0;
	new_stash = NULL;
	if (!stash && !buff)
		return (NULL);
	new_stash = malloc(sizeof(char) * (ft_strlen_gnl(stash) + ft_strlen_gnl(buff) + 1));
	if (!new_stash)
		return (NULL);
	while (stash[++i] && *stash)
		new_stash[i] = stash[i];
	while (buff[j])
		new_stash[i++] = buff[j++];
	new_stash[i] = '\0';
	free(stash);
	return (new_stash);
}
