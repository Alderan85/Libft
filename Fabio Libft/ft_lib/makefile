Library		= libft

files 	   = 		 ft_atoi \
			 ft_strlen \
			 ft_strcpy \
			 ft_isalpha \
			 ft_isdigit \
			 ft_isalnum \
			 ft_isascii \
			 ft_isprint \
			 ft_putchar_fd \
			 ft_putstr_fd \
			 ft_putendl_fd \
			 ft_memcpy \

Compiler	= gcc

CmpFlags	= -Wall -Wextra -Werror

OUTN	= $(Library).a

CFILES	= $(files:%=%.c)

OFILES	= $(files:%=%.o)

NAME	= $(OUTN)

$(NAME):
	$(Compiler) $(CmpFlags) -c $(CFILES) -I./
	ar -rc $(OUTN) $(OFILES)

all: $(NAME)

clean:
	rm -f $(NAME)
	rm -f $(OFILES)
	

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
