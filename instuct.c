/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instuct.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 08:43:51 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/12 10:14:44 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	call_sa(t_node **head_a)
{
	sa(head_a);
	ft_putendl("sa");
}

void	call_sa_rra(t_node **head_a)
{
	sa(head_a);
	ft_putendl("sa");
	rra(head_a);
	ft_putendl("rra");
}

void	call_ra(t_node **head_a)
{
	ra(head_a);
	ft_putendl("ra");
}

void	call_sa_ra(t_node **head_a)
{
	sa(head_a);
	ft_putendl("sa");
	ra(head_a);
	ft_putendl("ra");
}

void	call_rra(t_node **head_a)
{
	rra(head_a);
	ft_putendl("rra");
}
