/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_ultils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 15:23:19 by namatias          #+#    #+#             */
/*   Updated: 2025/12/06 10:58:58 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

static void	ft_move_min(t_helper *stack_a, int position)
{
	t_list	*temp;
	t_list	*temp_rev;
	int		rev_rotate;

	temp = stack_a->head;
	rev_rotate = 0;
	if (position <= stack_a->size / 2)
	{
		while (position)
		{
			ra(&stack_a);
			position--;
			temp = stack_a->head;
		}
	}
	else
	{
		temp_rev = stack_a->tail;
		rev_rotate = stack_a->size - position;
		while (rev_rotate--)
		{
			rra(&stack_a);
			temp_rev = stack_a->tail;
		}
	}
}

void	ft_find_min(t_helper *stack_a)
{
	t_list	*temp;
	int		min;
	int		position;
	int		i;

	i = 0;
	position = 0;
	temp = stack_a->head;
	min = temp->number;
	while (temp)
	{
		if (temp->number < min)
		{
			min = temp->number;
			position = i;
		}
		temp = temp->next;
		i++;
	}
	ft_move_min(stack_a, position);
}
