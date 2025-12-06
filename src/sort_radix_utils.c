/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:14:35 by namatias          #+#    #+#             */
/*   Updated: 2025/12/06 12:04:19 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

void	ft_set_index(t_helper *stack_a)
{
	t_list	*temp;
	t_list	*current;
	size_t	i_index;

	current = stack_a->head;
	while (current)
	{
		i_index = 0;
		temp = stack_a->head;
		while (temp)
		{
			if (current->number > temp->number)
				i_index++;
			temp = temp->next;
		}
		current->index = i_index;
		current = current->next;
	}
}

int	ft_bits_max_index(t_helper **stack_a)
{
	t_list	*temp;
	int		bits;
	int		max_index;

	bits = 0;
	max_index = 0;
	temp = (*stack_a)->head;
	while (temp)
	{
		if (temp->index > max_index)
			max_index = temp->index;
		temp = temp->next;
	}
	while ((max_index >> bits) != 0)
		bits++;
	return (bits);
}
