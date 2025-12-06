/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:03:43 by namatias          #+#    #+#             */
/*   Updated: 2025/12/06 10:13:23 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LIST_H
# define LINKED_LIST_H

# include "push_swap.h"

typedef struct t_helper
{
	struct s_list_nodes	*head;
	struct s_list_nodes	*tail;
	int					size;
}	t_helper;

typedef struct s_list_nodes
{
	int					number;
	int					index;
	struct s_list_nodes	*next;
	struct s_list_nodes	*prev;
}	t_list;

t_helper	*ft_create_helper(void);
t_list		*ft_create_node(int number);
t_list		*ft_detach(t_helper *helper, t_list *target_node);

void		ft_add_node(t_helper *reference, int number);
void		ft_deleting_list(t_helper **helper);

void		pb(t_helper **stack_a, t_helper **stack_b);
void		pa(t_helper **stack_a, t_helper **stack_b);

void		sa(t_helper **stack_a);
void		sb(t_helper **stack_b);
void		ss(t_helper **stack_a, t_helper **stack_b);

void		ra(t_helper **stack_a);
void		rb(t_helper **stack_b);
void		rr(t_helper **stack_a, t_helper **stack_b);

void		rra(t_helper **stack_a);
void		rrb(t_helper **stack_b);
void		rrr(t_helper **stack_a, t_helper **stack_b);

int			ft_check_free_split(char **argv, t_helper **stack_a);
int			ft_check_args(int argc, char **argv, t_helper **stack_a);

int			ft_is_sort(t_helper *stack_a);
void		ft_sort(t_helper **stack_a, t_helper **stack_b);

void		ft_sort_two(t_helper *stack_a);
void		ft_sort_three(t_helper *stack_a);
void		ft_find_min(t_helper *stack_a);
void		ft_sort_five(t_helper *stack_a, t_helper *stack_b);

void		ft_sort_radix(t_helper **stack_a, t_helper **stack_b);
void		ft_set_index(t_helper *stack_a);
int			ft_bits_max_index(t_helper **stack_a);

#endif