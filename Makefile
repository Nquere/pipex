# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nquere <nquere@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/05/07 00:01:24 by nquere            #+#    #+#              #
#    Updated: 2014/05/07 00:01:27 by nquere           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = pipex
SRC    = main.c \
		 ft_error.c \
		 ft_execve.c \
		 ft_fork_error.c \
		 ft_dup2_error.c \
		 ft_env_error.c \
		 ft_close_error.c

OBJ    = $(SRC:.c=.o)
LIB    = libft
INCL   = $(LIB)
CMP    = cc
LBFLAG = -lft
FLAGS  = -Wall -Werror -Wextra -O0 -g

.PHONY: re all clean fclean

all: $(NAME)

$(NAME): $(OBJ)
	@(cd $(LIB) && $(MAKE))
	@$(CMP) -o $(NAME) $(FLAGS) -I./libft -L./libft $(LBFLAG) $(OBJ)

%.o: %.c
	@$(CMP) -I $(INCL) -o $@ -c $? $(FLAGS)

.PHONY: re all clean fclean sall sname sclean sfclean

clean:
	@(cd $(LIB) && $(MAKE) $@)
	@rm -f $(OBJ)

fclean: clean
	@(cd $(LIB) && $(MAKE) $@)
	@rm -f $(NAME)

re: fclean all
	@(cd $(LIB) && $(MAKE) $@)
