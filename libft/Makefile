# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jylimaul <jylimaul@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 16:28:15 by jylimaul          #+#    #+#              #
#    Updated: 2021/12/06 16:26:34 by jylimaul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c \
ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c \
ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c \
ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c \
ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_iswhitespace.c

HEADERS = ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_strlen.o ft_strdup.o \
ft_strcpy.o ft_strncpy.o ft_strcat.o ft_strncat.o ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strstr.o ft_strnstr.o ft_strcmp.o \
ft_strncmp.o ft_atoi.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o \
ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o \
ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o ft_strtrim.o ft_strsplit.o ft_itoa.o ft_putchar.o ft_putstr.o ft_putendl.o \
ft_putnbr.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_iswhitespace.o ft_lstnew.o ft_lstdelone.o ft_lstdel.o \
ft_lstadd.o ft_lstiter.o ft_lstmap.o ft_all_caps.o ft_all_lower.o ft_intlen.o ft_power.o ft_count_chunks.o ft_find_next_end.o \
ft_strchri.o ft_base10.o ft_atoi_base.o ft_strjoinfree.o ft_strsubfree.o

FLAGS = -c -Wall -Wextra -Werror -I./includes

.PHONY: all clean fclean re name

all: $(NAME)

$(NAME): ${HEADERS}
	ar rc $(NAME) ${HEADERS}

ft_memset.o:
	gcc ${FLAGS} ft_memset.c

ft_bzero.o:
	gcc ${FLAGS} ft_bzero.c

ft_memcpy.o:
	gcc ${FLAGS} ft_memcpy.c

ft_memccpy.o:
	gcc ${FLAGS} ft_memccpy.c

ft_memmove.o:
	gcc ${FLAGS} ft_memmove.c

ft_memchr.o:
	gcc ${FLAGS} ft_memchr.c

ft_memcmp.o:
	gcc ${FLAGS} ft_memcmp.c

ft_strlen.o:
	gcc ${FLAGS} ft_strlen.c

ft_strdup.o:
	gcc ${FLAGS} ft_strdup.c

ft_strcpy.o:
	gcc ${FLAGS} ft_strcpy.c

ft_strncpy.o:
	gcc ${FLAGS} ft_strncpy.c

ft_strcat.o:
	gcc ${FLAGS} ft_strcat.c

ft_strncat.o:
	gcc ${FLAGS} ft_strncat.c

ft_strlcat.o:
	gcc ${FLAGS} ft_strlcat.c

ft_strchr.o:
	gcc ${FLAGS} ft_strchr.c

ft_strrchr.o:
	gcc ${FLAGS} ft_strrchr.c

ft_strstr.o:
	gcc ${FLAGS} ft_strstr.c

ft_strnstr.o:
	gcc ${FLAGS} ft_strnstr.c

ft_strcmp.o:
	gcc ${FLAGS} ft_strcmp.c

ft_strncmp.o:
	gcc ${FLAGS} ft_strncmp.c

ft_atoi.o:
	gcc ${FLAGS} ft_atoi.c

ft_isalpha.o:
	gcc ${FLAGS} ft_isalpha.c

ft_isdigit.o:
	gcc ${FLAGS} ft_isdigit.c

ft_isalnum.o:
	gcc ${FLAGS} ft_isalnum.c

ft_isascii.o:
	gcc ${FLAGS} ft_isascii.c

ft_isprint.o:
	gcc ${FLAGS} ft_isprint.c

ft_toupper.o:
	gcc ${FLAGS} ft_toupper.c

ft_tolower.o:
	gcc ${FLAGS} ft_tolower.c

ft_memalloc.o:
	gcc ${FLAGS} ft_memalloc.c

ft_memdel.o:
	gcc ${FLAGS} ft_memdel.c

ft_strnew.o:
	gcc ${FLAGS} ft_strnew.c

ft_strdel.o:
	gcc ${FLAGS} ft_strdel.c

ft_strclr.o:
	gcc ${FLAGS} ft_strclr.c

ft_striter.o:
	gcc ${FLAGS} ft_striter.c

ft_striteri.o:
	gcc ${FLAGS} ft_striteri.c

ft_strmap.o:
	gcc ${FLAGS} ft_strmap.c

ft_strmapi.o:
	gcc ${FLAGS} ft_strmapi.c

ft_strequ.o:
	gcc ${FLAGS} ft_strequ.c

ft_strnequ.o:
	gcc ${FLAGS} ft_strnequ.c

ft_strsub.o:
	gcc ${FLAGS} ft_strsub.c

ft_strjoin.o:
	gcc ${FLAGS} ft_strjoin.c

ft_strtrim.o:
	gcc ${FLAGS} ft_strtrim.c

ft_strsplit.o:
	gcc ${FLAGS} ft_strsplit.c

ft_itoa.o:
	gcc ${FLAGS} ft_itoa.c

ft_putchar.o:
	gcc ${FLAGS} ft_putchar.c

ft_putstr.o:
	gcc ${FLAGS} ft_putstr.c

ft_putendl.o:
	gcc ${FLAGS} ft_putendl.c

ft_putnbr.o:
	gcc ${FLAGS} ft_putnbr.c

ft_putchar_fd.o:
	gcc ${FLAGS} ft_putchar_fd.c

ft_putstr_fd.o:
	gcc ${FLAGS} ft_putstr_fd.c

ft_putendl_fd.o:
	gcc ${FLAGS} ft_putendl_fd.c

ft_putnbr_fd.o:
	gcc ${FLAGS} ft_putnbr_fd.c

ft_iswhitespace.o:
	gcc ${FLAGS} ft_iswhitespace.c

ft_lstnew.o:
	gcc ${FLAGS} ft_lstnew.c

ft_lstdelone.o:
	gcc ${FLAGS} ft_lstdelone.c

ft_lstdel.o:
	gcc ${FLAGS} ft_lstdel.c

ft_lstadd.o:
	gcc ${FLAGS} ft_lstadd.c

ft_lstiter.o:
	gcc ${FLAGS} ft_lstiter.c

ft_lstmap.o:
	gcc ${FLAGS} ft_lstmap.c

ft_all_caps.o:
	gcc ${FLAGS} ft_all_caps.c

ft_all_lower.o:
	gcc ${FLAGS} ft_all_lower.c

ft_intlen.o:
	gcc ${FLAGS} ft_intlen.c

ft_power.o:
	gcc ${FLAGS} ft_power.c

ft_count_chunks.o:
	gcc ${FLAGS} ft_count_chunks.c

ft_find_next_end.o:
	gcc ${FLAGS} ft_find_next_end.c

ft_strchri.o:
	gcc ${FLAGS} ft_strchri.c

ft_base10.o:
	gcc ${FLAGS} ft_base10.c

ft_atoi_base.o:
	gcc ${FLAGS} ft_atoi_base.c

ft_strjoinfree.o:
	gcc ${FLAGS} ft_strjoinfree.c

ft_strsubfree.o:
	gcc ${FLAGS} ft_strsubfree.c

clean:
	rm -f ${HEADERS}

fclean: clean
	rm -f ${T_LIB} $(NAME)

re: fclean all

