#include <iostream>
#include "Monster.h"
using namespace std;

class Zombie: public Monster {
	public:
		Zombie();
		void createZombie();
		void update_hp(int hp);
		void instantiate_hp();
		void set_stats();

	private:
		int zombieCount;
		int zombiesLeft;
		int zombieSkill;

};