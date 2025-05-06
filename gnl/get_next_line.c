/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 19:03:08 by maleca            #+#    #+#             */
/*   Updated: 2025/05/06 10:15:17 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*extract_line(char *stash)
{
	size_t	i;
	char *line;

	i = 0;
	line = malloc(sizeof(char) * (ft_strlen_gnl(stash) + 1));
	if(!line)
		return (NULL);
	while (stash[i++] && stash[i++] != '\n')
		line[i] = stash[i];
	line[i] = '\0';
	return (line);
}

void	stash_cleanup(char **stash)
{
	char	*cleaned_stash;
	size_t	i;
	size_t	j;
	
	if (!*stash || !(ft_strchr((*stash), '\n')))
	{
		free(*stash);
		*stash = NULL;
		return ;
	}
	cleaned_stash = malloc(sizeof(char) * ((ft_strlen_gnl((*stash)) + 1)));
	if (!cleaned_stash)
		return ;
	i = 0;
	j = 0;
	while ((*stash)[i] && (*stash)[i] != '\n')
		i++;
	while ((*stash)[++i])
		cleaned_stash[j++] = (*stash)[i];
	cleaned_stash[j] = '\0';
	free(stash);
	*stash = cleaned_stash;
}
char	*read_and_store(int fd, char *stash)
{
	char		*buff;
	ssize_t		read_bytes;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	read_bytes = 1;
	while (read_bytes > 0 && !ft_strchr(stash, '\n'))
	{
		read_bytes = read(fd, buff, BUFFER_SIZE);
		if (read_bytes == -1)
				return (free(buff), NULL);
		buff[read_bytes] = '\0';
		stash = ft_strjoin_gnl(stash, buff);
		if (!stash)
			return (free(buff), NULL);
	}
	free(buff);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char	*next_line;

	if (fd < 0|| BUFFER_SIZE < 0 || read(fd, NULL, 0) < 0)
	{
		free(stash);
		return (NULL);
	}
	stash = read_and_store(fd, stash);
	if (!stash)
	{
		free(stash);
		return (NULL);
	}
	next_line = extract_line(stash);
	stash_cleanup(&stash);
	return (next_line);
}

int	main(void)
{
	int	fd;
	char	*line;

	fd = open("test.txt", O_RDWR);
	line = get_next_line(fd);
	printf("%s\n", line);
	close(fd);
	return (0);
}