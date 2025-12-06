/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_one_five.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 14:11:29 by namatias          #+#    #+#             */
/*   Updated: 2025/12/06 11:15:20 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

int	ft_is_sort(t_helper *stack_a)
{
	t_list	*temp;

	if (stack_a->size == 1)
		return (1);
	temp = stack_a->head;
	while (temp->next)
	{
		if (temp->number < temp->next->number)
			temp = temp->next;
		else
			return (0);
	}
	return (1);
}

void	ft_sort_two(t_helper *stack_a)
{
	t_list	*temp;

	temp = stack_a->head;
	if (temp->number > temp->next->number)
		sa(&stack_a);
}

void	ft_sort_three(t_helper *stack_a)
{
	t_list	*temp;
	t_list	*check;

	if (!stack_a || !stack_a->head)
		return ;
	temp = stack_a->head;
	if (temp->number > temp->next->number)
	{
		if (temp->number > temp->next->next->number)
			ra(&stack_a);
	}
	else if (temp->number < temp->next->number)
	{
		if (temp->next->number > temp->next->next->number)
			rra(&stack_a);
	}
	check = stack_a->head;
	if (check->number > check->next->number)
		sa(&stack_a);
}

void	ft_sort_five(t_helper *stack_a, t_helper *stack_b)
{
	t_list	*temp;

	temp = stack_a->head;
	while (stack_a->size > 3)
	{
		ft_find_min(stack_a);
		pb(&stack_a, &stack_b);
	}
	ft_sort_three(stack_a);
	while (stack_b->size > 0)
		pa(&stack_a, &stack_b);
}
