CC			= c++
CFLAGS		= -std=c++98 -Wall -Wextra -Werror -g -fsanitize=address 

NAME		= ex04
INCLUDE		= -I./include/
SRC_DIR		= ./src/
SRC_FILES	= main.cpp		\
			  open_file.cpp
SRCS		= $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS		= $(SRCS:.cpp=.o)

%.o			: %.cpp
	$(CC) -c $(CFLAGS) $(INCLUDE) $< -o $@

all			: $(NAME)

$(NAME)		: $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDE) $(OBJS) -o $(NAME)

clean		:
	rm -f $(OBJS)

fclean		: clean
	rm -f *.replace
	rm -f $(NAME)

re			: fclean all

.PHONY		: all bonus clean fclean re
