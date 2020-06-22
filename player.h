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

		void set_alive(int tf);
		void set_hp(int hp);
		void set_str(int str);
		void set_spd(int spd);
		void set_score(int score);
		void set_flight();
		void set_fight();

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
		string status_ailment;
		string equipment;
};