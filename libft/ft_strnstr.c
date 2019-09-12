/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:59:01 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/06/21 16:58:45 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == needle[j])
		{
			while (needle[j] == str[i + j] && ((i + ft_strlen(needle) <= len)))
			{
				if (needle[j + 1] == '\0')
				{
					return ((char *)(str + i));
				}
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
