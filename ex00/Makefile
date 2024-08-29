CXX		:= c++
FLAGS	:= -Wall -Wextra -Werror -std=c++98
NAME 	:= convert
SRCS	:= main.cpp ScalarConverter.cpp utils.cpp
OBJS	:= $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(FLAGS) -o $@ $(OBJS)

%.o : %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all