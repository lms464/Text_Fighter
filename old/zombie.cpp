#include "zombie.h"
#include <iostream>
#include <math.h>       /* sqrt */
using namespace std;

Zombie::Zombie () {
	createZombie();
	instantiate_hp();
}

void Zombie::createZombie() {

	if (rand() %67 < 10) {
		zombieSkill = 11 ;
	} else {
		zombieSkill = rand() % 10 +1;
	}
};

void Zombie::instantiate_hp() {
	mHp = (int) sqrt(zombieSkill)+ (rand() + 1); // 2 - 4
	mHp_init = mHp;
};

void Zombie::update_hp(int hp) {
	mHp = mHp - hp
}

int Zombie::get_hp() {
	return mHp;
};

/*Zombie::Zombie() {
	createZombie();
}

int Zombie::createZombie() {

	if (rand() %67 < 10) {
		zombieSkill = 11;
	} else {
		zombieSkill = rand() % 10 +1;
	}
}
int Zombie::get_zombieCount() {
	return zombieCount;
}
int Zombie::zombies_left() {
	return zombiesLeft;
}
void Zombie::set_hp(int hp) {
	zombieHp = hp;
}
int Zombie::get_spd(){
	return zombieSpd;
}
int Zombie::get_hp() {
	return zombieHp;
}
void Zombie::set_zombieCount(int z) {
	zombieCount = z;
	zombiesLeft = z;
}
void Zombie::update_zombieCount() {
	zombiesLeft = zombiesLeft - 1;
}
void Zombie::spawn() {
	if (zombieHp==0 && zombiesLeft > 0) {
		zombieHp = 3;
	}
}*/