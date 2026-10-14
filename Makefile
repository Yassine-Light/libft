NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_isdigit.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isalnum.c\
		ft_isprint.c\
		ft_strlen.c\
		ft_memset.c\


OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $@ $^

%.o : %.c
	cc $(CFLAGS) -c $< -o $@

test : 
	cc $(CFLAGS) $(SRCS) main.c -o test

tclean : 
	rm -f test

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re test tclean
