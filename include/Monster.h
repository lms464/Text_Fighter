#include <stdlib.h>
#include <unistd.h>
#include <iostream>
using namespace std;

class Monster {

	public:
		//int m_get_species();
		void m_get_species(int m);
		void set_numMonster(int n);
		void update_numMonster();
		int get_monsters_left();
		int get_str();
		int get_def();
		int get_hp();
		int get_spd();
		int get_spc_atk();
		int get_spec();
		//int get_hp();
	protected:
		int mAtk;
		int mDef;
		int mSpd;
		int mSpc;
		int special;
		int mHp;
		int mHp_init;
		int mSpecies;
		int numMonster;
		int numMonsterLeft;
};

/*	Monster specials even
	0  - none
	2  - poison
	4  - sleep
	6  - drain
	8  - paralize
	10 - burn
	12 - freeze
*/