/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:22:00 by namatias          #+#    #+#             */
/*   Updated: 2025/12/06 11:12:36 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

void	ft_sort_radix(t_helper **stack_a, t_helper **stack_b)
{
	int		index;
	int		bits_max;
	int		size_stack_a;
	int		i;
	int		j;

	bits_max = ft_bits_max_index(stack_a);
	size_stack_a = (*stack_a)->size;
	i = -1;
	while (i++ < bits_max)
	{
		j = 0;
		while (j++ < size_stack_a && (*stack_a)->head)
		{
			index = (*stack_a)->head->index;
			if ((index >> i & 1) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
		}
		while ((*stack_b)->size > 0)
			pa(stack_a, stack_b);
		if (ft_is_sort(*stack_a))
			return ;
	}
}
