/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhalaty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 22:19:52 by lkhalaty          #+#    #+#             */
/*   Updated: 2021/03/19 22:19:56 by lkhalaty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int					ft_strlen(char *s)
{
	int				i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char				*ft_strjoin(char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*s3;

	if (!(s3 = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1)
				* sizeof(char))))
		return (NULL);
	i = 0;
	while (s1 && s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j] != '\0')
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[i] = '\0';
	free(s1);
	return (s3);
}

char				*ft_copy_line(char *s)
{
	char			*line1;
	int				i;

	i = 0;
	while (s && s[i] != '\0' && s[i] != '\n')
		i++;
	if (!(line1 = malloc(i + 1)))
		return (NULL);
	i = 0;
	while (s && s[i] != '\0' && s[i] != '\n')
	{
		line1[i] = s[i];
		i++;
	}
	line1[i] = '\0';
	return (line1);
}

char				*ft_copy_rest(char *buf)
{
	char			*rest;
	int				i;
	int				j;

	i = 0;
	if (!buf)
		return (NULL);
	while (buf && buf[i] != '\n' && buf[i] != '\0')
		i++;
	if (buf[i] == '\0')
	{
		free(buf);
		return (NULL);
	}
	if (!(rest = (char *)malloc(sizeof(char) * (ft_strlen(buf) - i + 1))))
		return (NULL);
	j = 0;
	i++;
	while (buf[i] != '\0')
	{
		rest[j++] = buf[i++];
	}
	rest[j] = '\0';
	free(buf);
	return (rest);
}

int					ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}
