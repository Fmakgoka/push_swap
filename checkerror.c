/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerror.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 16:45:54 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/15 00:57:21 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**fixstr(char **s)
{
	int		i;
	char	**str;

	i = 0;
	str = s;
	while (s[i])
	{
		str[i] = str[i + 1];
		i++;
	}
	str[i] = 0;
	return (s);
}

int		newlen(char **str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	checkerror(int argc, char **number)
{
	int i;

	i = 0;
	while (i < argc)
	{
		if (!ft_isint(number[i]) || (ft_check_dup(argc, number) == 0)
				|| !ft_isnumber(number[i]))
		{
			ft_putendl_fd("Error", 2);
			exit(0);
		}
		i++;
	}
}
