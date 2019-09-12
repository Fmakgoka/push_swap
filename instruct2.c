/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruct2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 10:15:51 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/12 10:34:22 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	call_pa(t_node **head_a, t_node **head_b)
{
	pa(head_a, head_b, (*head_b)->data);
	ft_putendl("pa");
}

void	call_rb(t_node **head_a)
{
	rb(head_a);
	ft_putendl("rb");
}

void	call_pb(t_node **heada, t_node **headb)
{
	pb(heada, headb, (*heada)->data);
	ft_putendl("pb");
}

void	call_rrb(t_node **head_a)
{
	rrb(head_a);
	ft_putendl("rrb");
}
