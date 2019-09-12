/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:19:48 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/12 15:12:32 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}t_node;

void	sa(t_node **head);
void	sb(t_node **head);
void	pa(t_node **a, t_node **b, int data);
void	pb(t_node **a, t_node **b, int data);
void	ra(t_node **head);
void	rb(t_node **head);
void	rr(t_node **a, t_node **);
void	rra(t_node **head);
void	rrb(t_node **head);
void	rrr(t_node **a, t_node **b);
void	deletep(t_node *head);
void	push_last(t_node **head, int data);
struct node*  ft_put(int agc, char **agv);
int		ft_min(t_node **head);
int		ft_max(t_node **head);
void	sort2(t_node **head);
void	sort3(t_node **head);
void	sort4(t_node **head, t_node **headb);
void	ft_four_things(t_node **head, t_node **headb);
void	ft_five_things(t_node **head, t_node **headb);
void	sort5(t_node **head, t_node **headb);
int		sorted3(t_node **head);
int		middle(t_node **head);
void	median(t_node  *head);
void	sorttmp(t_node **head);
int		tosize(t_node **head);
void	bignum(t_node **head, t_node **headb);
int		is_ontop( t_node **head, int min);
t_node	*clonelst(t_node *head);
void	print(struct node *structA, struct node *structB);
void	ft_quartile(t_node **head);
int		*find_ch(t_node **top);
void	ft_pushB(t_node **head, t_node **headb);
void	ft_revmid(t_node *a, t_node *b, int x);
void	ft_moveb(t_node *a, t_node *b);
int		issorted_a(t_node **head, t_node **headb);
void	swap(char *line, t_node **head_a, t_node **head_b);
void	push(char *line, t_node **head_a,t_node **head_b);
void	rotate(char *line,t_node **head_a,t_node  **head_b);
void	reverse(char *line, t_node **head_a,t_node **head_b);
int		ft_do_op(t_node **head, t_node **head_b);
void	call_sa(t_node **head_a);
void	call_sa_rra(t_node **head_a);
void	call_ra(t_node **head_a);
void	call_sa_ra(t_node **head_a);
void	call_rra(t_node **head_a);
int			find_small_big(t_node *stack, char *flag);
void			interval(t_node **stack_a, t_node **stack_b, int min, int max);
void		create_five_chunks(t_node **stack_a, t_node **stack_b);
void			sort_hundred_less(t_node **stack_a, t_node **stack_b);
void		sortbig(t_node **head, t_node **headb);
void	call_pa(t_node **head_a, t_node **head_b);
void	call_rb(t_node **head);
void	call_pb(t_node **heada, t_node **headb);
void	call_rrb(t_node **head_a);
void	sort_fivehund_less(t_node **stack_a, t_node **stack_b);
void	create_eleven_chunks(t_node **stack_a, t_node **stack_b);
char	**fixstr(char **s);
int		newlen(char **str);
void	checkerror(int argc, int i, char **number);

#endif
