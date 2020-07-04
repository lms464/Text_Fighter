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
		int bite();
	private:
		int zombieCount;
		int zombiesLeft;
		int zombieSkill;

};