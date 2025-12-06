/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_reverse_rotate.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:03:02 by namatias          #+#    #+#             */
/*   Updated: 2025/12/06 10:58:47 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

static int	ft_reverse_rotation(t_helper **helper)
{
	int		changed;
	t_list	*target_node;

	if (!helper || !(*helper) || (*helper)->head == NULL
		|| (*helper)->head->next == NULL)
		changed = 0;
	else
	{
		target_node = (*helper)->tail;
		ft_detach(*helper, target_node);
		target_node->next = (*helper)->head;
		target_node->prev = NULL;
		(*helper)->head->prev = target_node;
		(*helper)->head = target_node;
		changed = 1;
	}
	return (changed);
}

void	rra(t_helper **stack_a)
{
	int	changed;

	changed = ft_reverse_rotation(stack_a);
	if (changed != 0)
		write(1, "rra\n", 4);
}

void	rrb(t_helper **stack_b)
{
	int	changed;

	changed = ft_reverse_rotation(stack_b);
	if (changed != 0)
		write(1, "rrb\n", 4);
}

void	rrr(t_helper **stack_a, t_helper **stack_b)
{
	int	changed_a;
	int	changed_b;

	changed_a = ft_reverse_rotation(stack_a);
	changed_b = ft_reverse_rotation(stack_b);
	if (changed_a != 0 && changed_b != 0)
		write(1, "rrr\n", 4);
}
