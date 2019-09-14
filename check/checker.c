/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 15:04:22 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/14 16:33:53 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../push_swap.h"

static void			clean_up(int argc, char **number, t_node **a, t_node **b)
{
	argc == 2 ? ft_free(&number) : 0;
	ft_do_op(a, b);
	free_stuff(a, b);
}

int					main(int argc, char **argv)
{
	t_node			*a;
	t_node			*b;
	char			**number;
	int				ac;

	ac = argc;
	b = NULL;
	if (ac > 1)
	{
		if (!ft_strcmp(argv[1], ""))
			exit(0);
		ac--;
		if (ac == 1)
		{
			number = ft_strsplit(argv[1], ' ');
			if (!(ac = newlen(number)))
				exit(0);
		}
		else
			number = fixstr(argv);
		checkerror(ac, number);
		a = ft_put(ac, number);
		clean_up(argc, number, &a, &b);
	}
	return (0);
}
