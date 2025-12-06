# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/22 19:25:38 by namatias          #+#    #+#              #
#    Updated: 2025/12/06 09:45:17 by namatias         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#                            Variaveis / Variables                             #
################################################################################

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

FILESC = ft_atol.c \
		 ft_putendl_fd.c \
		 ft_str_is_numeric.c \
		 ft_strrchr.c \
		 ft_isalnum.c \
		 ft_putstr_fd.c \
		 ft_strjoin.c \
		 ft_substr.c \
		 ft_isdigit.c \
		 ft_split.c \
		 ft_strlcpy.c \
		 ft_itoa.c \
		 ft_strdup.c \
		 ft_strlen.c \


FILESO = $(FILESC:.c=.o)

################################################################################
#                             Funções / Functions                              #
################################################################################

all: $(NAME)

$(NAME): $(FILESO)
	@ar rcs $(NAME) $(FILESO)
	@echo "Libft created"

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(FILESO)

fclean: clean
	@rm -f $(NAME)

re:
	@$(MAKE) fclean 
	@$(MAKE) all

.PHONY: all clean fclean re
