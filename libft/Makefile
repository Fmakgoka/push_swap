# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/29 14:32:47 by fmakgoka          #+#    #+#              #
#    Updated: 2019/09/15 01:04:17 by fmakgoka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_toupper.c ft_tolower.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
      ft_isascii.c ft_isprint.c ft_memset.c ft_strcmp.c ft_strncmp.c ft_bzero.c \
      ft_memchr.c ft_strcat.c ft_strchr.c ft_strcpy.c ft_strstr.c ft_memccpy.c ft_memcmp.c \
      ft_memmove.c ft_strdup.c ft_strlen.c ft_strncpy.c ft_strrchr.c ft_memcpy.c \
      ft_strncat.c ft_atoi.c ft_strnstr.c ft_strlcat.c ft_putchar.c ft_putstr.c ft_putendl.c\
	  ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_memalloc.c\
	  ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c\
	  ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c\
	  ft_strsplit.c ft_itoa.c ft_intmax.c ft_arrydel.c ft_isnumber.c ft_check_dup.c get_next_line.c
OBJECTS = ft_toupper.o ft_tolower.o ft_isalpha.o ft_isdigit.o ft_isalnum.o \
          ft_memset.o ft_strcmp.o ft_strncmp.o ft_isascii.o ft_isprint.o ft_bzero.o \
          ft_memchr.o ft_strcat.o ft_strchr.o ft_strcpy.o ft_strstr.o ft_memccpy.o ft_memcmp.o \
          ft_memmove.o ft_strdup.o ft_strlen.o ft_strncpy.o ft_strrchr.o ft_memcpy.o \
          ft_strncat.o ft_atoi.o ft_strnstr.o ft_strlcat.o ft_putchar.o ft_putstr.o ft_putendl.o\
		  ft_putnbr.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_memalloc.o\
		  ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o\
		  ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o ft_strtrim.o\
		  ft_strsplit.o ft_itoa.o ft_intmax.o ft_arrydel.o ft_isnumber.o ft_check_dup.o get_next_line.o

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc -c $(CFLAGS) $(SRC)
	ar -rv $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re:    fclean all
