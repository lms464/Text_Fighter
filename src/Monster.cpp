#include "../include/Monster.h"
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

/*int Monster::m_get_spcies() {
	mSpecies = rand() % 11	;
}*/

void Monster::m_get_species(int m){
	if (m > 10) {
		mSpecies = rand() % 11	;
	}
	mSpecies = m;
};

void Monster::set_numMonster(int n) {
	numMonster = n;
	numMonsterLeft = n;
};

void Monster::update_numMonster() {
	numMonsterLeft = numMonsterLeft - 1;
};

int Monster::get_monsters_left() {
	return numMonsterLeft;
};

int Monster::get_str() {
	return mAtk;
};
int Monster::get_def() {
	return mDef;
};
int Monster::get_spd() {
	return mSpd;
};
int Monster::get_hp() {
	return mHp;
};

int Monster::get_spc_atk() {
	return mSpc;
};

int Monster::get_spec() {
	return special;
};