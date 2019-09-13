/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 15:04:22 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/13 12:22:34 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../push_swap.h"

int		main(int argc, char **argv)
{
	int		i;
	t_node	*a;
	t_node	*b;
	char	**number;

	i = 0;
	if (argc > 1)
	{
		if (!ft_strcmp(argv[1], ""))
			exit(0);
		argc--;
		if (argc == 1)
		{
			number = ft_strsplit(argv[1], ' ');
			if (!(argc = newlen(number)))
				exit(0);
		}
		else
			number = fixstr(argv);
		checkerror(argc, i, number);
		a = ft_put(argc, number);
		ft_do_op(&a, &b);
	}

	return (0);
}
