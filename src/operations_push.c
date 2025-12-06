/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 08:49:21 by namatias          #+#    #+#             */
/*   Updated: 2025/12/06 10:58:45 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

void	pb(t_helper **stack_a, t_helper **stack_b)
{
	int		changed;
	t_list	*target_node;

	if (!stack_a || !(*stack_a) || ((*stack_a)->head == NULL))
		changed = 0;
	else
	{
		target_node = (*stack_a)->head;
		ft_detach((*stack_a), target_node);
		target_node->next = (*stack_b)->head;
		target_node->prev = NULL;
		if ((*stack_b)->head != NULL)
			(*stack_b)->head->prev = target_node;
		else
			(*stack_b)->tail = target_node;
		(*stack_b)->head = target_node;
		(*stack_b)->size += 1;
		(*stack_a)->size -= 1;
		changed = 1;
	}
	if (changed != 0)
		write(1, "pb\n", 3);
}

void	pa(t_helper **stack_a, t_helper **stack_b)
{
	int		changed;
	t_list	*target_node;

	changed = 0;
	if (!stack_b || !(*stack_b) || ((*stack_b)->head == NULL))
		return ;
	else
	{
		target_node = (*stack_b)->head;
		ft_detach((*stack_b), target_node);
		target_node->next = (*stack_a)->head;
		target_node->prev = NULL;
		if ((*stack_a)->head != NULL)
			(*stack_a)->head->prev = target_node;
		else
			(*stack_a)->tail = target_node;
		(*stack_a)->head = target_node;
		(*stack_a)->size += 1;
		(*stack_b)->size -= 1;
		changed = 1;
	}
	if (changed != 0)
		write(1, "pa\n", 3);
}
