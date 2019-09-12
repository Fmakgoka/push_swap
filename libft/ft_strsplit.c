/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 10:45:34 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/06/22 09:12:48 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t		ft_counter(char const *s, char c)
{
	unsigned int	i;
	unsigned int	ctr;

	i = 0;
	ctr = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i] != '\0')
		{
			ctr++;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
			}
		}
		if (s[i] != '\0')
		{
			i++;
		}
	}
	return (ctr);
}

char				**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	start;
	size_t	ctr;

	i = 0;
	start = 0;
	ctr = 0;
	if (!s || !(str = (char **)malloc(sizeof(char *) * (ft_counter(s, c) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			str[ctr++] = ft_strsub(s, start, i - start);
		}
	}
	str[ctr] = NULL;
	return (str);
}
