/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 13:51:22 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/09 13:14:08 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_c(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			break ;
		i++;
	}
	return (i);
}

static	int		ft_read(const int fd, char **str)
{
	char	*buf;
	char	*tmp;
	int		r;

	buf = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1));
	while ((r = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[r] = '\0';
		if (!*str)
			*str = ft_strdup(buf);
		else
		{
			tmp = *str;
			*str = ft_strjoin(*str, buf);
			free(tmp);
		}
		if (*str && ft_strchr(buf, '\n'))
			break ;
	}
	free(buf);
	if (r == 0 || r < 0)
		return (r);
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	static char		*str[FD_SIZE];
	char			*tmp;
	int				r;

	r = ft_read(fd, &str[fd]);
	if (r == -1)
		return (-1);
	if (r == 0 && (str[fd] == NULL || str[fd][0] == '\0'))
	{
		*line = ft_strdup("");
		return (0);
	}
	*line = ft_strsub(str[fd], 0, count_c(str[fd], '\n'));
	tmp = str[fd];
	str[fd] = ft_strsub(str[fd], count_c(str[fd], '\n') + 1, ft_strlen(str[fd])
	- count_c(str[fd], '\n'));
	free(tmp);
	return (1);
}
