/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_fivehun.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 10:46:55 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/12 11:16:27 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_eleven_chunks(t_node **stack_a, t_node **stack_b)
{
	int		small;
	int		big;
	int		div;

	small = find_small_big(*stack_a, "sn");
	big = find_small_big(*stack_a, "bn");
	div = ((big - small) / 11);
	interval(stack_a, stack_b, small, (small + div));
	interval(stack_a, stack_b, (small + div + 1), (small + (div * 2)));
	interval(stack_a, stack_b, (small + (div * 2) + 1), (small + (div * 3)));
	interval(stack_a, stack_b, (small + (div * 3) + 1), (small + (div * 4)));
	interval(stack_a, stack_b, (small + (div * 4) + 1), (small + (div * 5)));
	interval(stack_a, stack_b, (small + (div * 5) + 1), (small + (div * 6)));
	interval(stack_a, stack_b, (small + (div * 6) + 1), (small + (div * 7)));
	interval(stack_a, stack_b, (small + (div * 7) + 1), (small + (div * 8)));
	interval(stack_a, stack_b, (small + (div * 8) + 1), (small + (div * 9)));
	interval(stack_a, stack_b, (small + (div * 9) + 1), (small + (div * 10)));
	interval(stack_a, stack_b, (small + (div * 10) + 1), big);
}

void	sort_fivehund_less(t_node **stack_a, t_node **stack_b)
{
	int			big;
	int			len;
	t_node		*i;

	create_eleven_chunks(stack_a, stack_b);
	len = tosize(stack_b);
	while (len != 0)
	{
		i = (*stack_b);
		big = find_small_big(*stack_b, "bn");
		while (i->data != big)
		{
			if (find_small_big(*stack_b, "bnp") <= (tosize(stack_b) / 2))
				call_rb(stack_b);
			else
				call_rrb(stack_b);
			i = (*stack_b);
		}
		if (i->data == big)
			call_pa(stack_a, stack_b);
		len--;
	}
}
