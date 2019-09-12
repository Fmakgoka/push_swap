/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting43.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 09:31:39 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/10 09:33:50 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_four_things(t_node **stack_a, t_node **stack_b)
{
	sort3(stack_a);
	pa(stack_a, stack_b, (*stack_b)->data);
	ft_putendl("pa");
}

void	ft_five_things(t_node **head, t_node **headb)
{
	sort3(head);
	if ((*headb)->data < (*headb)->next->data)
	{
		sa(headb);
		ft_putendl("sa");
	}
	pa(head, headb, (*headb)->data);
	ft_putendl("pa");
	pa(head, headb, (*headb)->data);
	ft_putendl("pa");
}
