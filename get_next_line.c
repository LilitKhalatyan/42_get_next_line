/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhalaty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 22:19:22 by lkhalaty          #+#    #+#             */
/*   Updated: 2021/03/19 22:19:32 by lkhalaty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int				get_next_line(int fd, char **line)
{
	char		*buffer;
	static char	*stat;
	int			read_done;

	if (fd < 0 || !line || BUFFER_SIZE <= 0)
		return (-1);
	if (!(buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	read_done = 1;
	while ((read_done = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[read_done] = '\0';
		stat = ft_strjoin(stat, buffer);
		if (ft_strchr(stat, '\n') || ft_strchr(stat, '\0'))
			break ;
	}
	if (read_done == -1)
		return (-1);
	free(buffer);
	*line = ft_copy_line(stat);
	stat = ft_copy_rest(stat);
	if (read_done == 0 && !stat)
		return (0);
	return (1);
}
