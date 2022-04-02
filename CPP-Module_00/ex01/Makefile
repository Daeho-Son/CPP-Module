CC			= c++
CFLAGS		= -std=c++98 -Wall -Wextra -Werror -g -fsanitize=address 

NAME		= phonebook
SRCS		= main.cpp		\
			  PhoneBook.cpp	\
			  Contact.cpp
OBJS		= $(SRCS:.cpp=.o)

%.o			: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@

all			: $(NAME)

$(NAME)		: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean		:
	rm -f $(OBJS)

fclean		: clean
	rm -f $(NAME)

re			: fclean all

.PHONY		: all bonus clean fclean re
