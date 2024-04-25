#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie = newZombie("One");
	zombie->announce();
	randomChump("Another one");
	delete zombie;
	return 0;
}
