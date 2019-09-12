/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 14:33:40 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/06/22 02:06:28 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		white_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	char		*str;
	size_t		end;
	size_t		start;
	size_t		x;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	if (s[0] == '\0')
		return ((char *)s);
	while (white_space(s[start]) && s[start] != '\0')
		start++;
	if (s[start] == '\0')
		return (ft_strcpy(ft_strnew(1), ""));
	while (white_space(s[end]) && end >= 0)
		end--;
	if (!(str = (char*)malloc(sizeof(char) * ((end - start) + 2))))
		return (NULL);
	x = 0;
	while (start <= end)
		str[x++] = s[start++];
	str[x] = '\0';
	return (str);
}
