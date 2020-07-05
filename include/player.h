#include <iostream>
using namespace std;

class Player {
	public: 
		Player();
		void get_stats();

		int get_str();
		int get_spd();
		int get_hp();
		int get_initHp();
		int get_alive();
		int get_score();
		int get_fight();
		int get_flight();
		int get_diffHp();
		int get_heals();
		void heal();

		void set_name(string name);
		void set_alive(int tf);
		void set_hp(int hp);
		void set_str(int str);
		void set_spd(int spd);
		void set_score(int score);
		void set_flight();
		void set_fight();

		void check_ailment();
		void set_ailment(int special, int len);
		void update_ailment();

 	private:
 		int playerSkill = rand() % 5 + 8 ;
		int playerSpd = (playerSkill ) + (rand() % 7 -3);
		int playerStr = (playerSkill * 2) + (rand() % 9 - 4);
		int playerHp =  (playerSkill) - 3;
		int playerHp_init = (playerSkill) - 3;
		int playerAlive = true;
		int playerScore = 1;
		int fight = 0;
		int flight = 0;
		int heals = 3;
		// TODO implemnt status ailment for player and zombie
		int status_ailment = 0;
		int ailment_len = 0; // how long ailment lasts
		string equipment;
		string name;
};
/*	negative ailment
	2  - poison
	4  - sleep
	6  - drain
	8  - paralize
	10 - burn
	12 - freeze
*/