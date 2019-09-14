/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 16:42:48 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/14 16:43:27 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstdel(t_node **head)
{
	t_node *temp;

	temp = *head;
	while (temp)
	{
		(*head) = (*head)->next;
		free(temp);
		temp = (*head);
	}
}

void	free_stuff(t_node **stack_a, t_node **stack_b)
{
	if (stack_a && (*stack_a))
	{
		ft_lstdel(stack_a);
	}
	if (stack_b && (*stack_b))
	{
		ft_lstdel(stack_b);
	}
}
