/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 10:54:40 by namatias          #+#    #+#             */
/*   Updated: 2025/12/06 10:58:55 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_free_split(char **splited, t_helper **stack_a)
{
	int			i;
	int			flag;
	t_helper	*start;

	i = 0;
	flag = 1;
	start = (*stack_a);
	while (splited[i])
		i++;
	if (!ft_limit(i, splited, 0) || !ft_double(i, splited, 0)
		|| !ft_check_atol(i, splited, 0))
		flag = 0;
	i = 0;
	while (splited[i])
	{
		if (flag == 1)
			ft_add_node(start, ft_atol(splited[i]));
		free(splited[i]);
		i++;
	}
	free(splited);
	return (flag);
}

int	ft_check_args(int argc, char **argv, t_helper **stack_a)
{
	int			i;
	t_helper	*start;

	i = argc;
	start = (*stack_a);
	if (!ft_limit(i, argv, 1) || !ft_double(i, argv, 1)
		|| !ft_check_atol(i, argv, 1))
		return (0);
	i = 1;
	while (argv[i])
	{
		ft_add_node(start, ft_atol(argv[i]));
		i++;
	}
	return (1);
}
