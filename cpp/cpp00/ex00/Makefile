# Nom de l'exécutable
NAME = megaphone

# Options de compilation
CXX = c++
CXXFLAGS = -Wextra -Werror -Wall -std=c++98

# Fichiers source
SRCS = megaphone.cpp

# Fichiers objets
OBJS = $(SRCS:.cpp=.o)

# Règle par défaut (all)
all: $(NAME)

# Règle de compilation de l'exécutable
$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

# Règle de compilation des fichiers objets
%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

# Règle de nettoyage des fichiers objets
clean:
	@rm -f $(OBJS)

# Règle de nettoyage complet (fichiers objets et exécutable)
fclean: clean
	@rm -f $(NAME)

# Règle de reconstruction complète
re: fclean all

# Directive pour ignorer les fichiers et dossiers spécifiques
.PHONY: all clean fclean re
