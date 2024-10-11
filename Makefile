CC = cc
CFLAGS = -Wall -Wextra -Werror 
NAME = libft.a

SRC_FILES := ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
OBJ_FILES := $(SRC_FILES:.c=.o)
OBJ_FOLDER := obj
BONUS_FILES := 

# all
all: $(NAME)

# NAME
$(NAME): $(OBJ_FILES)
	ar rcs $@ $^

$(OBJ_FILES): %.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# clean 
clean:
	rm -f $(OBJ_FILES)

# fclean
fclean: clean
	rm -f $(NAME)

# re
re: fclean all

# Bonus Rule
bonus: $(SRC_FILES) += $(BONUS_FILES)
bonus: all

debug: $(CFLAGS) += -g -fsanitize=address
debug: re

.PHONY: all clean fclean re bonus
