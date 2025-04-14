# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/16 16:03:41 by jlaine            #+#    #+#              #
#    Updated: 2024/08/22 15:33:30 by jlaine           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

CLIENT_NAME = client
SERVER_NAME = server
CLIENT_SRCS = srcs/client.c
SERVER_SRCS = srcs/server.c

CLIENT_BONUS_NAME = client_bonus
SERVER_BONUS_NAME = server_bonus
CLIENT_BONUS_SRCS = srcs_bonus/client_bonus.c
SERVER_BONUS_SRCS = srcs_bonus/server_bonus.c

LIBFT_PATH		= libft
LIBFT_ARCHIVE	= $(LIBFT_PATH)/libft.a

GREEN	= \033[0;32m
RED		= \033[0;31m
NC		= \033[0m

all: $(CLIENT_NAME) $(SERVER_NAME)

$(CLIENT_NAME): $(CLIENT_SRCS) $(LIBFT_ARCHIVE)
	@$(CC) $(CFLAGS) -o $@ $(CLIENT_SRCS) -L$(LIBFT_PATH) -lft
	@echo "$(GREEN)./client created$(NC)"

$(SERVER_NAME): $(SERVER_SRCS) $(LIBFT_ARCHIVE)
	@$(CC) $(CFLAGS) -o $@ $(SERVER_SRCS) -L$(LIBFT_PATH) -lft
	@echo "$(GREEN)./server created$(NC)"

$(CLIENT_BONUS_NAME): $(CLIENT_BONUS_SRCS) $(LIBFT_ARCHIVE)
	@$(CC) $(CFLAGS) -o $@ $(CLIENT_BONUS_SRCS) -L$(LIBFT_PATH) -lft
	@echo "$(GREEN)./client_bonus created$(NC)"

$(SERVER_BONUS_NAME): $(SERVER_BONUS_SRCS) $(LIBFT_ARCHIVE)
	@$(CC) $(CFLAGS) -o $@ $(SERVER_BONUS_SRCS) -L$(LIBFT_PATH) -lft
	@echo "$(GREEN)./server_bonus created$(NC)"

$(LIBFT_ARCHIVE):
	@$(MAKE) -C $(LIBFT_PATH) --no-print-directory

clean:
	@$(MAKE) -C $(LIBFT_PATH) clean --no-print-directory
	@echo "$(RED)Cleaned object files$(NC)"

fclean: clean
	@$(MAKE) -C $(LIBFT_PATH) fclean --no-print-directory
	@rm -f $(CLIENT_NAME) $(SERVER_NAME) $(CLIENT_BONUS_NAME) $(SERVER_BONUS_NAME)
	@echo "$(RED)Cleaned executables$(NC)"

re: fclean all

bonus: $(CLIENT_BONUS_NAME) $(SERVER_BONUS_NAME)

.PHONY: all clean fclean re bonus
