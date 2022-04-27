CXX			= c++
CXXFLAGS	= -std=c++98 -Wall -Wextra -Werror
DEBUG		= -g -fsanitize=address 

NAME		= 05_ex02
INCLUDE		= -I./include/
SRC_DIR		= ./src/
SRC_FILES	= main.cpp						\
			  Bureaucrat.cpp				\
			  Form.cpp						\
			  ShrubberyCreationForm.cpp		\
			  RobotomyRequestForm.cpp		\
			  PresidentialPardonForm.cpp
SRCS		= $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS		= $(SRCS:.cpp=.o)

%.o			: %.cpp
	$(CXX) -c $(CXXFLAGS) $(INCLUDE) $< -o $@

all			: $(NAME)

$(NAME)		: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

debug		:
	$(CXX) $(DEBUG) $(INCLUDE) $(SRCS) -o debug

clean		:
	rm -f $(OBJS)

fclean		: clean
	rm -f $(NAME)

re			: fclean all

.PHONY		: all bonus clean fclean re
