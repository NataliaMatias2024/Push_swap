/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:12:07 by namatias          #+#    #+#             */
/*   Updated: 2025/12/06 10:58:52 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

static int	ft_swap(t_helper **helper)
{
	int		changed;
	t_list	*target_node;
	t_list	*second_position;
	t_list	*third_position;

	if (!(*helper) || (*helper)->head == NULL || (*helper)->head->next == NULL)
		changed = 0;
	else
	{
		target_node = (*helper)->head;
		second_position = target_node->next;
		third_position = second_position->next;
		ft_detach(*helper, target_node);
		target_node->next = third_position;
		target_node->prev = second_position;
		second_position->next = target_node;
		second_position->prev = NULL;
		if (third_position != NULL)
			third_position->prev = target_node;
		changed = 1;
	}
	return (changed);
}

void	sa(t_helper **stack_a)
{
	int	changed;

	changed = ft_swap(stack_a);
	if (changed == 1)
		write(1, "sa\n", 3);
}

void	sb(t_helper **stack_b)
{
	int	changed;

	changed = ft_swap(stack_b);
	if (changed == 1)
		write(1, "sb\n", 3);
}

void	ss(t_helper **stack_a, t_helper **stack_b)
{
	int	changed_a;
	int	changed_b;

	changed_a = ft_swap(stack_a);
	changed_b = ft_swap(stack_b);
	if (changed_a == 1 && changed_b == 1)
		write(1, "ss\n", 3);
}
