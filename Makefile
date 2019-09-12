# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/12 11:44:56 by fmakgoka          #+#    #+#              #
#    Updated: 2019/09/12 15:09:16 by fmakgoka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
SRC = add.c ft_small.c instruct2.c instuct.c issorted_a.c middle.c\
	  minmax.c sorting43.c sortings.c sort_fivehun.c sort_hun.c sorttmp.c \
	  swab.c rules.c ruleall.c ruleb.c  check/checkerlst.c checkerror.c
OBJECTS = *.o

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@make -C libft/
	@gcc -c $(CFGLAGS) $(SRC)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@gcc check/checker.c push_swap.a libft/libft.a -Wall -Werror -Wextra -o checker
	@gcc push_swap.c push_swap.a libft/libft.a -Wall -Werror -Wextra -o push_swap
clean:
	@/bin/rm -f $(OBJECTS)
	@make clean -C libft/
fclean: clean
	@/bin/rm -f $(NAME)
	@make fclean -C libft/
	@rm checker push_swap

re:		fclean all
