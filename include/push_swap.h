/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:46:25 by namatias          #+#    #+#             */
/*   Updated: 2025/12/06 12:55:55 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define MAX_INT 2147483647
# define MIN_INT -2147483648

# include <unistd.h>
# include <stdlib.h>

# include "../Libft/libft.h"
# include "linked_list.h"

int	ft_space(char *str);
int	ft_limit(int argc, char **argv, int splited);
int	ft_double(int argc, char **argv, int splited);
int	ft_check_atol(int argc, char **argv, int splited);

#endif
