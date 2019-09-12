/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 15:04:22 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/10 11:27:21 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../push_swap.h"

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
	i--;
	return (i);
}

void	checkerror(int argc, int i, char **number)
{
	while (i < argc)
	{
		if (!ft_isint(number[i]) || !ft_check_dup(argc, number)
				|| !ft_insnumber(number[i]))
		{
			ft_putendl_fd("Error", 2);
			exit(0);
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	node_t	*a;
	node_t	*b;
	char	**number;

	i = 1;
	if (argc > 1)
	{
		argc--;
		if (argc == 1)
		{
			number = ft_strsplit(argv[1], ' ');
			argc = newlen(number);
		}
		else
			number = fixstr(argv);
		checkerror(argc, i, number);
		a = ft_put(argc, number);
		ft_do_op(&a, &b);
	}
	return (0);
}
