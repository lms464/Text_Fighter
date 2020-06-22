#include <iostream>
#include "Monster.h"
using namespace std;

//TODO build to be a monster nest
// subclass with different monsters
// boss monster subclass
/*
class Zombie {
	public:
		Zombie();
		int createZombie();
		int zombies_left();
		void set_zombieCount(int z);
		void update_zombieCount();
		int get_zombieCount();
		int get_hp();
		int get_spd();
		void set_hp(int hp);
		void spawn();
	private:
		int zombieCount;
		int zombiesLeft;
		int zombieSkill;
		int zombieHp = 3; //zombieSkill + (rand() % 3 - 1);
		int zombieSpd = 1;//zombieSkill + (rand() % 5 - 6);
		int zombieStr = 5;//zombieSkill = (rand() % 5 - 4);
		//int zombieSkill;
};
*/
class Zombie: public Monster {
	public:
		Zombie();
		void createZombie();
		//int get_zombieCount();
		int get_hp();
		int get_spd();
		int get_str();
		void update_hp(int hp);
		//void spawn();
		void instantiate_hp();

	private:
		int zombieCount;
		int zombiesLeft;
		int zombieSkill;
		int mHp = 3; //zombieSkill + (rand() % 3 - 1);
		int mSpd = 1;//zombieSkill + (rand() % 5 - 6);
		int mAtk = 5;//zombieSkill = (rand() % 5 - 4);
		//int zombieSkill;
};