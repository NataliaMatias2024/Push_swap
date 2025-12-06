/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:45:37 by namatias          #+#    #+#             */
/*   Updated: 2025/12/06 10:58:53 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_space(char *str)
{
	int	i;

	i = 0;
	if (str == NULL || *str == '\0')
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	while (str[i])
	{
		if (str[i] != 32)
			return (0);
		i++;
	}
	ft_putstr_fd("Error\n", 2);
	return (1);
}

int	ft_limit(int argc, char **argv, int splited)
{
	while (splited < argc)
	{
		if (ft_atol(argv[splited]) > MAX_INT
			|| ft_atol(argv[splited]) < MIN_INT)
		{
			ft_putstr_fd("Error\n", 2);
			return (0);
		}
		splited++;
	}
	return (1);
}

int	ft_double(int argc, char **argv, int splited)
{
	int	i;

	while (splited < argc)
	{
		i = splited + 1;
		while (i < argc)
		{
			if (ft_atol(argv[splited]) == ft_atol(argv[i]))
			{
				ft_putstr_fd("Error\n", 2);
				return (0);
			}
			i++;
		}
		splited++;
	}
	return (1);
}

int	ft_check_atol(int argc, char **argv, int splited)
{
	int	i;
	int	aux;

	i = splited;
	while (i < argc)
	{
		aux = ft_atol(argv[i]);
		if (aux == 0 && !ft_str_is_numeric(argv[i]))
		{
			ft_putstr_fd("Error\n", 2);
			return (0);
		}
		i++;
	}
	return (1);
}
