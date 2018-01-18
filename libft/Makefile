# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmihance <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/29 20:37:08 by lmihance          #+#    #+#              #
#    Updated: 2017/12/20 15:28:58 by lmihance         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRC=ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_islower.c ft_isprint.c ft_isupper.c ft_tolower.c ft_toupper.c ft_atoi.c ft_strcmp.c ft_strlcat.c ft_strncmp.c ft_strrchr.c ft_strcat.c ft_strcpy.c ft_strlen.c ft_strncpy.c ft_strstr.c ft_strchr.c ft_strdup.c ft_strncat.c ft_strnstr.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c ft_bzero.c ft_memchr.c ft_memcpy.c ft_memset.c ft_memccpy.c ft_memcmp.c ft_memmove.c ft_memalloc.c ft_memdel.c ft_putchar.c ft_putmatrix_char.c ft_putnbr.c ft_putchar_fd.c ft_putmatrix_char_fd.c ft_putnbr_fd.c ft_putendl.c ft_putmatrix_int.c ft_putstr.c ft_putendl_fd.c ft_putmatrix_int_fd.c ft_putstr_fd.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c

OBJ=$(SRC:.c=.o)

all:$(NAME)

$(NAME): $(OBJ)
	gcc -c -Wall -Wextra -Werror $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

test:
	touch libft.a
	mkdir to_erase
	mv libft.a to_erase

test2: 
	rm -rf to_erase

fclean: clean
	rm -rf $(NAME)

re: fclean test all test2

.PHONY : clean clean
