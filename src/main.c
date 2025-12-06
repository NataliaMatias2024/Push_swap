/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:13:49 by namatias          #+#    #+#             */
/*   Updated: 2025/12/06 11:24:29 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int			flag_args;
	char		**splited;
	t_helper	*stack_a;
	t_helper	*stack_b;

	flag_args = 0;
	stack_a = ft_create_helper();
	stack_b = ft_create_helper();
	if (argc == 1 || (argc == 2 && !argv[1]))
		ft_putstr_fd("Error\n", 2);
	else if (argc == 2 && argv[1])
	{
		if (!ft_space(argv[1]))
		{
			splited = ft_split(argv[1], ' ');
			flag_args = ft_check_free_split(splited, &stack_a);
		}
	}
	else if (argc >= 2)
		flag_args = ft_check_args(argc, argv, &stack_a);
	if (flag_args == 1)
		ft_sort(&stack_a, &stack_b);
	ft_deleting_list(&stack_a);
	ft_deleting_list(&stack_b);
	return (0);
}
