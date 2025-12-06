/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 23:06:28 by namatias          #+#    #+#             */
/*   Updated: 2025/12/06 10:58:49 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

static int	ft_rotate(t_helper **stack)
{
	int		changed;
	t_list	*target_node;

	if (!stack || !(*stack) || (*stack)->head == NULL)
		changed = 0;
	else
	{
		target_node = (*stack)->head;
		ft_detach((*stack), target_node);
		target_node->next = NULL;
		target_node->prev = (*stack)->tail;
		(*stack)->tail->next = target_node;
		(*stack)->tail = target_node;
		changed = 1;
	}
	return (changed);
}

void	ra(t_helper **stack_a)
{
	int	changed;

	changed = ft_rotate(stack_a);
	if (changed != 0)
		write(1, "ra\n", 3);
}

void	rb(t_helper **stack_b)
{
	int	changed;

	changed = ft_rotate(stack_b);
	if (changed != 0)
		write(1, "rb\n", 3);
}

void	rr(t_helper **stack_a, t_helper **stack_b)
{
	int	changed_a;
	int	changed_b;

	if ((!stack_a || !(*stack_a) || (*stack_a)->head == NULL) || (!stack_b
			|| !(*stack_b) || (*stack_b)->head == NULL))
		return ;
	changed_a = ft_rotate(stack_a);
	changed_b = ft_rotate(stack_b);
	if (changed_a != 0 && changed_b != 0)
		write(1, "rr\n", 3);
}
