/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerlst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 09:04:15 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/09 15:51:05 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int			ft_do_op(t_node **head_a, t_node **head_b)
{
	char *line;

	while (get_next_line(0, &line) == 1)
	{
		if (ft_strcmp(line, "sa") == 0 || ft_strcmp(line, "sb") == 0
				|| ft_strcmp(line, "ss") == 0)
			swap(line, head_a, head_b);
		else if (ft_strcmp(line, "pa") == 0 || ft_strcmp(line, "pb") == 0)
			push(line, head_a, head_b);
		else if (ft_strcmp(line, "ra") == 0 || ft_strcmp(line, "rb") == 0
				|| ft_strcmp(line, "rr") == 0)
			rotate(line, head_a, head_b);
		else if (ft_strcmp(line, "rra") == 0 || ft_strcmp(line, "rrb") == 0
				|| ft_strcmp(line, "rrr") == 0)
			reverse(line, head_a, head_b);
		else
			exit(0);
	}
	issorted_a(head_a, head_b) ? ft_putendl("OK") : ft_putendl("KO");
	return (1);
}
