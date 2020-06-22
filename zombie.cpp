#include "zombie.h"
#include <iostream>
#include <math.h>       /* sqrt */
using namespace std;

Zombie::Zombie () {
	createZombie();
};

void Zombie::createZombie() {

	if (rand() %67 < 10) {
		zombieSkill = 11 ;
	} else {
		zombieSkill = rand() % 10 +1;
	}
	set_stats();
};

void Zombie::instantiate_hp() {
	mHp = sqrt(zombieSkill) + (rand()%3 ); // 2 - 4
	mHp_init = mHp;
};

void Zombie::set_stats() {
	instantiate_hp();
	mSpd = 1;
	mAtk = 5;
	mDef = 0;
};

void Zombie::update_hp(int hp) {
	mHp = mHp - hp;
};