#include "Monster.h"
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

/*int Monster::m_get_spcies() {
	mSpecies = rand() % 11	;
}*/

int Monster::m_get_species(int m){
	if (m > 10) {
		mSpecies = rand() % 11	;
	}
	mSpecies = m;
}

void Monster::set_numMonster(int n) {
	numMonster = n;
	numMonsterLeft = n;
}

void Monster::update_numMonster() {
	numMonsterLeft = numMonsterLeft - 1;
}

int Monster::get_monsters_left() {
	return numMonsterLeft;
}