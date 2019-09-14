/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   issorted.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 01:21:19 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/14 17:06:25 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		issorted_a(t_node **head, t_node **headb)
{
	if (!head || !(*head))
		exit(0);
	if ((*head)->next == NULL)
		return (1);
	while ((*head)->next)
	{
		if ((*head)->data < (*head)->next->data)
			head = &(*head)->next;
		else
			return (0);
	}
	return (1);
}
