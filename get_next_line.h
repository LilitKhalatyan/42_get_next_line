/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhalaty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 22:19:40 by lkhalaty          #+#    #+#             */
/*   Updated: 2021/03/31 17:37:13 by lkhalaty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

int		get_next_line(int fd, char **line);
int		ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_copy_line(char *s);
char	*ft_copy_rest(char *s);
int		ft_strchr(const char *s, int c);

#endif
