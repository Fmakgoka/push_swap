/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 14:47:16 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/15 01:11:28 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

void				push_swap(t_node **a, t_node **b)
{
	if (tosize(a) == 2)
		sort2(a);
	else if (tosize(a) == 3)
		sort3(a);
	else if (tosize(a) == 4)
		sort4(a, b);
	else if (tosize(a) == 5)
		sort5(a, b);
	else if (tosize(a) <= 100)
		sort_hundred_less(a, b);
	else if (tosize(a) <= 500)
		sort_fivehund_less(a, b);
	free_stuff(a, b);
}

static void			cleaner(int argc, char **number, t_node **a, t_node **b)
{
	if (!issorted_a(a, b))
		push_swap(a, b);
	free_stuff(a, b);
	(argc == 2) ? ft_free(&number) : 0;
}

int					main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	char	**number;
	int		args;

	args = argc;
	b = NULL;
	if (args > 1)
	{
		if (!ft_strcmp(argv[1], ""))
			exit(0);
		args--;
		if (args == 1)
		{
			number = ft_strsplit(argv[1], ' ');
			if (!(args = newlen(number)))
				exit(0);
		}
		else
			number = fixstr(argv);
		checkerror(args, number);
		a = ft_put(args, number);
		cleaner(argc, number, &a, &b);
	}
	while(1);
	return (0);
}
