# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/13 13:17:36 by hde-andr          #+#    #+#              #
#    Updated: 2025/10/17 16:40:22 by hde-andr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "libft.a"

PART_1 = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strchr.c\
		ft_memmove.c ft_strlcat.c ft_toupper.c ft_tolower.c \
		ft_strlcpy.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \

PART_2 = ft_substr.c ft_putnbr_fd.c#ft_strjoin.c ft_strtrim.c ft_split.c \
		ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

#BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstadd_back.c \
#		ft_lstdelone.c ft_lstclear.c ft_lastiter.c ft_lstmap.c

SRCS = $(PART_1) $(PART_2)

OBJS = $(SRCS:.c=.o)

%.o: %.c
	cc -Wall -Wextra -Werror -I. -c $< -o  $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

#bonus: $(BONUS)
	

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
