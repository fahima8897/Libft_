# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/27 11:25:54 by marvin            #+#    #+#              #
#    Updated: 2021/06/15 13:18:43 by fboumell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

SRCS	= ft_isdigit.c ft_memset.c ft_isprint.c \
	ft_strlcat.c ft_atoi.c ft_calloc.c \
	ft_strlcpy.c ft_tolower.c ft_bzero.c ft_memccpy.c ft_strlen.c \
	ft_toupper.c ft_memchr.c ft_isalnum.c \
	ft_memcmp.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c \
	ft_strnstr.c ft_isascii.c ft_strdup.c ft_strrchr.c ft_memmove.c \
	ft_putnbr_fd.c ft_putendl_fd.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_substr.c ft_strjoin.c  ft_strtrim.c ft_itoa.c ft_strmapi.c

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstmap.c ft_lstclear.c ft_lstiter.c

OBJS		=	${SRCS:.c=.o}

OBJS_BONUS	=	${SRCS_BONUS:.c=.o}

$(NAME):	${OBJS}
			ar rc ${NAME} ${OBJS}
				
%.o :		%.c 
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all : 		${NAME}

bonus : 	${OBJS} ${OBJS_BONUS}
			ar rc ${NAME} ${OBJS} ${OBJS_BONUS}
		
clean : 
			${RM} ${OBJS} ${OBJS_BONUS}

fclean : 	clean
			${RM} ${NAME}

re : 		fclean all

.PHONY : 	all clean fclean re bonus
