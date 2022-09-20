# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laballea <laballea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/09 15:19:20 by laballea          #+#    #+#              #
#    Updated: 2019/11/18 13:42:59 by laballea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_itoa.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memccpy.c ft_memmove.c \
		ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
		ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
		ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \
		ft_strcat.c ft_itoaunsigned.c  ft_putnbr_base_uns.c \
		ft_putnbr_base.c ft_intlen.c ft_unslen.c ft_abs.c
		
SRCBIS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstclear.c ft_lstdelone.c ft_lstclear.c \
		ft_lstiter.c ft_lstmap.c 

NAME = libft.a

INCLUDE = \libft.h

OBJ = $(subst .c,.o,$(SRC))

OBJBIS = $(subst .c,.o,$(SRCBIS))

all: $(NAME)

bonus: $(OBJBIS) $(OBJ)
	gcc $(CFLAGS) -c -I$(INCLUDE) $(SRC) $(SRCBIS)
	ar rc $(NAME) $(OBJBIS)
	ranlib $(NAME)

$(NAME): $(OBJ)
		gcc $(CFLAGS) -c -I$(INCLUDE) $(SRC)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
	rm -f $(OBJ) $(OBJBIS)

fclean: clean
	rm -f $(NAME) $(NAMEBIS) libft.h.gch

re: fclean all bonus

.PHONY : fclean re clean