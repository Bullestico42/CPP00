NAME := phonebook
SRCS := main.cpp Contact.cpp PhoneBook.cpp
OBJS = $(SRCS:.cpp=.o)
CC = c++ -Wall -Wextra -Werror -std=c++98 #-fsanitize=address,undefined -fno-omit-frame-pointer -g -O0
RM = rm -f
all: $(NAME)

# Compilation
$(NAME): $(OBJS)
	@printf "\rCompiling $(NAME)..."
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME) $(LDFLAGS)

	@printf "\r\033[0;32m$(NAME) compiled successfully.\t\t\n\033[0m"
%.o: %.cpp
	@printf "\rCompiling $<...                    "
	@$(CC) $(CFLAGS) -c $< -o $@
clean:
	@printf "\rCleaning object files..."
	@$(RM) $(OBJS)
	@printf "\rObject files cleaned.          \n"
fclean: clean
	@printf "\rRemoving $(NAME)...         "
	@$(RM) $(NAME)
	@printf "\r$(NAME) removed.\t\t\t\n"
re: fclean all
.PHONY: all clean fclean re
