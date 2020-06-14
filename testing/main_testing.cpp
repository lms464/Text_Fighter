#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <ctype.h>
#include "zombie.h"
int main() {
	srand(time(NULL));

	Zombie zomb;
	std::cout << zomb.get_hp() << endl;


	return 0;
}