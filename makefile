NAME = libft.a

LIB_SRC = ft_strlen.c ft_strdup.c ft_atoi.c ft_memset.c ft_bzero.c 
ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_memchr.c ft_memcmp.c 
ft_strnstr.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_putchar_fd.c 
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c 
ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c 

LIB_OBJ := $(LIB_SRC:%.c=%.o)

TEST_SRC = main.c test.c
TEST_OBJ := $(TEST_SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(LIB_OBJ)
	ar rcs $@ $^

%.o: %.c
	gcc -Wextra -Wall -Werror -c $< -o $@

clean:
	rm -f $(LIB_OBJ) $(TEST_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
