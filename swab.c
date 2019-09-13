/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swab.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:09:21 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/13 12:18:32 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(char *line, t_node **head_a, t_node **head_b)
{
	if (ft_strcmp(line, "sa") == 0)
		sa(head_a);
	else if (ft_strcmp(line, "sb") == 0)
		sa(head_b);
	else if (ft_strcmp(line, "ss") == 0)
	{
		sa(head_a);
		sa(head_b);
	}
}

void	push(char *line, t_node **head_a, t_node **head_b)
{
	if (ft_strcmp(line, "pa") == 0)
	{
		if(tosize(head_b))
			pa(head_a, head_b, (*head_b)->data);
	}
	else if (ft_strcmp(line, "pb") == 0)
		if (tosize(head_a))
			pa(head_b, head_a, (*head_a)->data);
}

void	rotate(char *line, t_node **head_a, t_node **head_b)
{
	if (ft_strcmp(line, "ra") == 0)
		ra(head_a);
	else if (ft_strcmp(line, "rb") == 0)
		ra(head_b);
	else if (ft_strcmp(line, "rr") == 0)
	{
		ra(head_a);
		ra(head_b);
	}
}

void	reverse(char *line, t_node **head_a, t_node **head_b)
{
	if (ft_strcmp(line, "rra") == 0)
		rra(head_a);
	else if (ft_strcmp(line, "rrb") == 0)
		rra(head_b);
	else if (ft_strcmp(line, "rrr") == 0)
	{
		rra(head_a);
		rra(head_b);
	}
}
