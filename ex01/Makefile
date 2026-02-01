SRC = main1.cpp Fixed1.cpp

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ex01

OBJ = $(SRC:.cpp=.o)

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	
%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re