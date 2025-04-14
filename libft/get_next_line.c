/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 15:45:46 by jlaine            #+#    #+#             */
/*   Updated: 2024/08/19 16:04:59 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*free_and_return(char *temp_buffer, char **buffer)
{
	free(temp_buffer);
	free(*buffer);
	*buffer = NULL;
	return (NULL);
}

char	*read_until_newline(int fd, char **buffer)
{
	char	*temp_buffer;
	char	*old_buffer;
	ssize_t	bytes_read;

	bytes_read = 1;
	temp_buffer = malloc(BUFFER_SIZE + 1);
	if (*buffer == NULL)
	{
		*buffer = malloc(1);
		**buffer = '\0';
	}
	while (bytes_read && !ft_strchr(*buffer, '\n'))
	{
		bytes_read = read(fd, temp_buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free_and_return(temp_buffer, buffer));
		temp_buffer[bytes_read] = '\0';
		old_buffer = *buffer;
		*buffer = ft_strjoin(*buffer, temp_buffer);
		free(old_buffer);
	}
	free(temp_buffer);
	return (NULL);
}

char	*extract_line(char **buffer)
{
	char	*new_buffer;
	char	*line;
	char	*newline_pos;

	if (!ft_strchr(*buffer, '\n'))
	{
		line = *buffer;
		*buffer = NULL;
		return (line);
	}
	newline_pos = ft_strchr(*buffer, '\n');
	line = ft_substr(*buffer, 0, newline_pos - *buffer + 1);
	new_buffer = ft_strdup(newline_pos + 1);
	free(*buffer);
	*buffer = new_buffer;
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line_read;

	line_read = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	read_until_newline(fd, &buffer);
	if (buffer && buffer[0] != 0)
		line_read = extract_line(&buffer);
	if (buffer && buffer[0] == 0)
	{
		free (buffer);
		buffer = NULL;
	}
	return (line_read);
}
