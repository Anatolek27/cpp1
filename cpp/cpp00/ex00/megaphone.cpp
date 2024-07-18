#include <iostream>
#include <cctype>
#include <string>

int	main(int argc, char **argv) {
	if (argc == 1) {
		std::cout  << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	} else {
		for (int i = 1; argv[i]; i++) {
			int j = 0;
			while (argv[i][j]) {
				if (argv[i][j] < 123 && argv[i][j] > 96) {
					argv[i][j] = std::toupper(argv[i][j]);
				}
				j++;
			}
		}
		for (int i = 1; i < argc; i++) {
			std::cout << argv[i];
			if (i < argc - 1)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}