#include <stdlib.h>
#include <unistd.h>
#include <iostream>
using namespace std;

class Monster {

	public:
		//int m_get_species();
		int m_get_species(int m);
		int set_numMonster(int n);
		//int get_hp();
	protected:
		int mAtk;
		int mDef;
		int mSpd;
		int mHp;
		int mHp_init;
		int mSpecies;
		int numMonster;
};