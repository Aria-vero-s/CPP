NAME = FragTrap
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
HEADERS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
OBJS = $(SRCS:.cpp=.o)
RM = rm -f
VG = valgrind -s --leak-check=full --show-leak-kinds=all --track-origins=yes

all: $(NAME)

# Compilation: .cpp -> .o initialization
%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Edition des liens: .o -> executable compilation
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

test: re
	$(VG) ./$(NAME)

.PHONY: all clean fclean re