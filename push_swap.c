/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 14:47:16 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/12 15:02:26 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

void	push_swap(t_node *a, t_node *b)
{
	if (tosize(&a) == 2)
		ft_putendl("sa");
	else if (tosize(&a) == 3)
		sort3(&a);
	else if (tosize(&a) == 4)
		sort4(&a, &b);
	else if (tosize(&a) == 5)
		sort5(&a, &b);
	else if (tosize(&a) <= 100)
		sort_hundred_less(&a, &b);
	else if (tosize(&a) <= 500)
		sort_fivehund_less(&a, &b);
}
int		main(int argc, char **argv)
{
	int		i;
	t_node	*a;
	t_node	*b;
	char	**number;

	i = 0;
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
		if (!issorted_a(&a, &b))
			push_swap(a, b);
	}
	return(0); 
}
