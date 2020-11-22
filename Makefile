# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lsmit <lsmit@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/21 16:25:46 by lsmit         #+#    #+#                  #
#    Updated: 2020/10/26 16:03:54 by lsmit         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a
SRC = ft_write.s ft_strcpy.s ft_strlen.s ft_strcmp.s ft_read.s ft_strdup.s
OBJ = $(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $?

%.o: %.s
	nasm -fmacho64 $<

test: all
	@ gcc main.c -L. -lasm -o libasm
	@ ./libasm
	@$(RM) me.txt og.txt

clean:
	$(RM) $(OBJ)
	$(RM) libasm

fclean: clean
	$(RM) $(NAME)

re: fclean all
