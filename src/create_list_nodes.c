/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list_nodes.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:44:29 by namatias          #+#    #+#             */
/*   Updated: 2025/12/06 10:58:38 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_helper	*ft_create_helper(void)
{
	t_helper	*helper;

	helper = (t_helper *) malloc (sizeof(t_helper));
	if (helper == NULL)
		return (NULL);
	helper->head = NULL;
	helper->tail = NULL;
	helper->size = 0;
	return (helper);
}

t_list	*ft_create_node(int number)
{
	t_list	*new_node;

	new_node = (t_list *) malloc (sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->number = number;
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->index = 0;
	return (new_node);
}

void	ft_add_node(t_helper *helper, int number)
{
	t_list	*node;

	node = ft_create_node(number);
	if (helper->head == NULL && helper->tail == NULL)
	{
		helper->head = node;
		helper->tail = node;
		node->prev = NULL;
	}
	else
	{
		helper->tail->next = node;
		node->prev = helper->tail;
		helper->tail = node;
	}
	helper->size += 1;
}

t_list	*ft_detach(t_helper *helper, t_list *target_node)
{
	if (!helper || !target_node)
		return (NULL);
	if (target_node->prev)
		target_node->prev->next = target_node->next;
	if (target_node->next)
		target_node->next->prev = target_node->prev;
	if (helper->head == target_node)
		helper->head = target_node->next;
	if (helper->tail == target_node)
		helper->tail = target_node->prev;
	target_node->next = NULL;
	target_node->prev = NULL;
	return (target_node);
}
