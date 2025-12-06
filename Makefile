# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/06 20:14:17 by namatias          #+#    #+#              #
#    Updated: 2025/12/06 09:44:50 by namatias         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#******************************************************************************#
#					              Variables                                    #
#******************************************************************************#

NAME =	push_swap

CC = cc
CFLAGS = -g -Wall -Wextra -Werror

SRC_DIR =	./src/
OBJ_DIR =	./obj/
INC_DIR =	./include/
LIB_DIR =	./Libft/

IFLAGS = -I$(INC_DIR) -I$(LIB_DIR)include
LDFLAGS = -L $(LIB_DIR) -lft

LIBFT = $(LIB_DIR)libft.a

FILES_C = create_list_nodes.c \
		  deleting_list_nodes.c \
		  parse.c\
		  parse_utils.c \
		  operations_swap.c \
		  operations_push.c \
		  operations_rotate.c \
		  operations_reverse_rotate.c \
		  sort_radix_utils.c \
		  sort_radix.c \
		  sort_five_ultils.c \
		  sort_one_five.c \
		  sort.c \
		  main.c \
		

FILES_O = $(FILES_C:.c=.o)

OBJ = $(addprefix $(OBJ_DIR), $(FILES_O))

#******************************************************************************#
#   				              Functions                                    #
#******************************************************************************#

all: $(NAME) $(LIBFT)

$(NAME): $(OBJ_DIR) $(OBJ) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJ) $(LDFLAGS) -o $(NAME)
	@echo "push_swap created"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(LIBFT):
	@$(MAKE) -C $(LIB_DIR)

clean:
	@rm -f $(OBJ_DIR)*.o
	@$(MAKE) -C $(LIB_DIR) clean
	@echo	"Files *.o removed from $(OBJ_DIR)"

fclean:	clean
	@rm	-f	$(NAME)
	@$(MAKE) -C $(LIB_DIR) fclean
	@echo "Files push_swap removed"

re: fclean all

.PHONY: all clean fclean re