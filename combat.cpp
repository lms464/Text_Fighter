#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <ctype.h>
#include "player.h"
#include "zombie.h"
#include "combat.h"
using namespace std;

//TODO make combat a class
//TODO how does def and str play?
//TODO change Zombie &zombie into Monster and &monster
//TODO special monster attacks based on "dice roll"
void combat(Player &player, Zombie &zombie) {
	while (player.get_hp()>0 && zombie.get_hp()>0) {

		string action;
		cout << "Will you:" << endl;
		cout << "fight, run, or check stats?" << endl;
		cin >> action;
		//convert each turn into a while loop of actions
		if (action == "stats") {
			player.get_stats();
			cout << "Will you:" << endl;
			cout << "fight, run, or heal?" << endl;
			cin >> action;
			if (action == "heal") {
				if (player.get_heals() <= 0) {
					cout << "You are out of heals!" << endl;
					action = "fight";
				}
				else {
					player.heal();
					action = "fight";
				}
			}
		}

		if (action == "run") {

			if (player.get_spd() > zombie.get_spd()) {
				player.set_flight();
				zombie.update_hp(zombie.get_hp());
				cout << "Succesfully escaped the zombie" << endl;
			}

			else {
				cout << "You could not excape" << endl;
				action = "fight";
			}

		}
		if (action == "fight") {


			if (player.get_spd() < zombie.get_spd()) {

				cout << "Zombie stats:" << endl;
				cout << "HP:  " << zombie.get_hp() << endl;
				cout << "SPD: "<< zombie.get_spd() << endl;
				cout << "STR: "<< zombie.get_str() << endl;
				cout << endl;
				
				// zombie attacks first
				cout << endl <<  "The Zombie swings at you."<<endl;
				player.set_hp(player.get_hp() - 1);
				cout << endl;
				cout  << "You swings at the zombie."<<endl;
				zombie.update_hp(1);
			} 
			else {

				cout << "Zombie stats:" << endl;
				cout << "HP:  " << zombie.get_hp() << endl;
				cout << "SPD: "<< zombie.get_spd() << endl;
				cout << "STR: "<< zombie.get_str() << endl;
				cout << endl;

				// player attacks first
				cout  << "You swings at the zombie."<<endl;
				cout << endl;
				zombie.update_hp(1);
				cout << endl <<  "The Zombie swings at you."<<endl;
				player.set_hp(1);

			}
			sleep(2);
		}
	}

	if (player.get_hp() <= 0) {
		player.set_alive(false);
	}

	if (zombie.get_hp() <=0) {
		zombie.update_numMonster();
		player.set_fight();
		player.set_score(2);
		cout << "You've survived the zombie!" << endl;
		cout << endl;
	}
	zombie.createZombie();
	sleep(1);
};