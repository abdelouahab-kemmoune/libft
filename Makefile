SRCS = ft_strlen.c \
           ft_strdup.c \
           ft_atoi.c \
           ft_memset.c \
           ft_bzero.c \
           ft_memcpy.c \
           ft_memmove.c \
           ft_strlcpy.c \
           ft_strlcat.c \
           ft_memchr.c \
           ft_memcmp.c \
           ft_strnstr.c \
           ft_substr.c \
           ft_strjoin.c \
           ft_strtrim.c \
           ft_itoa.c \
           ft_putchar_fd.c \
           ft_putstr_fd.c \
           ft_putendl_fd.c \
           ft_putnbr_fd.c \
           ft_strmapi.c \
           ft_striteri.c \

SRCS_BONUS = ft_lstnew_bonus.c \
             ft_lstadd_front_bonus.c \
             ft_lstsize_bonus.c \
             ft_lstlast_bonus.c \
             ft_lstadd_back_bonus.c \
             ft_lstdelone_bonus.c \
             ft_lstclear_bonus.c \
             ft_lstiter_bonus.c \
             ft_lstmap_bonus.c

OBJS			= $(SRCS:.c=.o)
CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror
AR				= ar
ARF				= -rc

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS) 

%.o : %.c
				$(CC) -c $(CFLAGS) $<
				$(AR) $(ARF) $(NAME) $@

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)
