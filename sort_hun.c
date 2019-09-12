/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:02:59 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/12 10:37:29 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		interval(t_node **stack_a, t_node **stack_b, int min, int max)
{
	t_node		*p;
	t_node		*i;
	int			nbr;

	p = *stack_a;
	while (p != NULL)
	{
		if ((p->data >= min) && (p->data <= max))
		{
			nbr = p->data;
			i = *stack_a;
			while (i->data != nbr)
			{
				call_ra(stack_a);
				i = *stack_a;
			}
			if (i->data == nbr)
				call_pb(stack_a, stack_b);
			p = *stack_a;
		}
		else
			p = p->next;
	}
}

void		create_five_chunks(t_node **stack_a, t_node **stack_b)
{
	int		small;
	int		big;
	int		div;

	small = find_small_big(*stack_a, "sn");
	big = find_small_big(*stack_a, "bn");
	div = ((big - small) / 5);
	interval(stack_a, stack_b, small, (small + div));
	interval(stack_a, stack_b, (small + div + 1), (small + (div * 2)));
	interval(stack_a, stack_b, (small + (div * 2) + 1), (small + (div * 3)));
	interval(stack_a, stack_b, (small + (div * 3) + 1), (small + (div * 4)));
	interval(stack_a, stack_b, (small + (div * 4) + 1), big);
}

void		sort_hundred_less(t_node **stack_a, t_node **stack_b)
{
	int			big;
	int			len;
	t_node		*i;

	create_five_chunks(stack_a, stack_b);
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
