CC			= c++
CFLAGS		= -std=c++98 -Wall -Wextra -Werror
DEBUG		= -g -fsanitize=address 

NAME		= 03_ex03
INCLUDE		= -I./include/
SRC_DIR		= ./src/
SRC_FILES	= main.cpp			\
			  ClapTrap.cpp		\
			  ScavTrap.cpp		\
			  FragTrap.cpp		\
			  DiamondTrap.cpp
SRCS		= $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS		= $(SRCS:.cpp=.o)

%.o			: %.cpp
	$(CC) -c $(CFLAGS) $(INCLUDE) $< -o $@

all			: $(NAME)

$(NAME)		: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

debug		:
	$(CC) $(DEBUG) $(INCLUDE) $(SRCS) -o debug

clean		:
	rm -f $(OBJS)

fclean		: clean
	rm -f $(NAME)

re			: fclean all

.PHONY		: all bonus clean fclean re
