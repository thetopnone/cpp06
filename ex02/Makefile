CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Base.cpp A.cpp B.cpp C.cpp main.cpp
OBJS = $(patsubst %.cpp, objs/%.o, $(SRCS))
NAME = ex02

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

objs/%.o: %.cpp
	@mkdir -p objs
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -rf objs

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
