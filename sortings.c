/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:55:17 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/10 10:10:56 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2(t_node **head)
{
	if ((*head)->data > (*head)->next->data)
	{
		ft_putendl("sa");
		sa(head);
	}
}

void	sort3(t_node **head)
{
	if ((*head)->data > (*head)->next->data && (*head)->data <
			(*head)->next->next->data)
		call_sa(head);
	else if ((*head)->data > (*head)->next->data && (*head)->next->data >
			(*head)->next->next->data)
		call_sa_rra(head);
	else if ((*head)->data > (*head)->next->data && (*head)->data >
			(*head)->next->next->data)
		call_ra(head);
	else if ((*head)->data < (*head)->next->data && (*head)->data <
			(*head)->next->next->data)
		call_sa_ra(head);
	else if ((*head)->data < (*head)->next->data && (*head)->data >
			(*head)->next->next->data)
		call_rra(head);
}

void	sort4(t_node **head, t_node **headb)
{
	t_node	*current;
	int		median;
	int		size;
	int		i;

	current = NULL;
	current = *head;
	size = tosize(head);
	i = 1;
	median = middle(head);
	while (i++ <= (size))
	{
		current = *head;
		if (current->data < median)
		{
			pb(head, headb, (*head)->data);
			ft_putendl("pb");
		}
		else
		{
			ra(head);
			ft_putendl("ra");
		}
	}
	ft_four_things(head, headb);
}

void	sort5(t_node **head, t_node **headb)
{
	t_node	*current;
	int		median;
	int		size;
	int		i;

	current = NULL;
	current = *head;
	size = tosize(head);
	i = 1;
	median = middle(head);
	while (i++ <= (size))
	{
		current = *head;
		if (current->data < median)
		{
			pb(head, headb, (*head)->data);
			ft_putendl("pb");
		}
		else
		{
			ra(head);
			ft_putendl("ra");
		}
	}
	ft_five_things(head, headb);
}
