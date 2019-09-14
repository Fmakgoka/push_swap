/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:05:16 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/14 16:49:20 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int				small(t_node *stack, char *flag)
{
	int			nbr;
	int			pos;
	int			ctr;
	t_node		*i;

	nbr = stack->data;
	i = stack->next;
	pos = 1;
	ctr = 2;
	while (i != NULL)
	{
		if (i->data < nbr)
		{
			nbr = i->data;
			pos = ctr;
		}
		i = i->next;
		ctr++;
	}
	if (ft_strequ(flag, "sn"))
		return (nbr);
	else if (ft_strequ(flag, "snp"))
		return (pos);
	return (0);
}

static int				big(t_node *stack, char *flag)
{
	int			nbr;
	int			pos;
	int			ctr;
	t_node		*i;

	nbr = stack->data;
	i = stack->next;
	pos = 1;
	ctr = 2;
	while (i != NULL)
	{
		if (i->data > nbr)
		{
			nbr = i->data;
			pos = ctr;
		}
		i = i->next;
		ctr++;
	}
	if (ft_strequ(flag, "bn"))
		return (nbr);
	else if (ft_strequ(flag, "bnp"))
		return (pos);
	return (0);
}

int						find_small_big(t_node *stack, char *flag)
{
	if (ft_strequ(flag, "sn"))
		return (small(stack, flag));
	else if (ft_strequ(flag, "snp"))
		return (small(stack, flag));
	else if (ft_strequ(flag, "bn"))
		return (big(stack, flag));
	else if (ft_strequ(flag, "bnp"))
		return (big(stack, flag));
	return (0);
}
