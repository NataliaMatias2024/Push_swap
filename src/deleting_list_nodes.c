/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deleting_list_nodes.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:50:03 by namatias          #+#    #+#             */
/*   Updated: 2025/12/06 10:58:40 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_deleting_node(t_helper **helper, t_list *target_node)
{
	if (!helper || !target_node)
		return ;
	ft_detach((*helper), target_node);
	target_node->number = 0;
	free(target_node);
}

static void	ft_deleting_all_nodes(t_helper **helper, t_list *first_node)
{
	t_list	*current_node;
	t_list	*temp;

	if (!helper || !first_node)
		return ;
	current_node = first_node;
	while (current_node)
	{
		temp = current_node->next;
		ft_deleting_node(helper, current_node);
		current_node = temp;
	}
	(*helper)->head = NULL;
	(*helper)->tail = NULL;
	(*helper)->size = 0;
}

void	ft_deleting_list(t_helper **helper)
{
	if (!helper || !*helper)
		return ;
	ft_deleting_all_nodes(helper, (*helper)->head);
	free(*helper);
	*helper = NULL;
}
