#include <stdlib.h>
#include <unistd.h>
#include <iostream>
using namespace std;

class Monster {

	public:
		//int m_get_species();
		int m_get_species(int m);
		void set_numMonster(int n);
		void update_numMonster();
		int get_monsters_left();
		//int get_hp();
	protected:
		int mAtk;
		int mDef;
		int mSpd;
		int mHp;
		int mHp_init;
		int mSpecies;
		int numMonster;
		int numMonsterLeft;
};