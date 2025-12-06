/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 16:46:34 by namatias          #+#    #+#             */
/*   Updated: 2025/12/06 11:23:03 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

void	ft_sort(t_helper **stack_a, t_helper **stack_b)
{
	t_helper	*temp;

	temp = (*stack_a);
	if (!ft_is_sort(*stack_a))
	{
		if (temp->size == 2)
			ft_sort_two(*stack_a);
		else if (temp->size == 3)
			ft_sort_three(*stack_a);
		else if (temp->size <= 5)
			ft_sort_five(*stack_a, *stack_b);
		else
		{
			ft_set_index(*stack_a);
			ft_sort_radix(stack_a, stack_b);
		}
	}
}
