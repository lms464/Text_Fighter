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

void combat(Player &player, Zombie &zombie) {
	while (player.get_hp()>0 && zombie.get_hp()>0) {

		string action;
		cout << "Will you:" << endl;
		cout << "fight, run, or check stats?" << endl;
		cin >> action;

		if (action == "stats") {
			player.get_stats();
			cout << "Will you:" << endl;
			cout << "fight, run, or heal?" << endl;
			cin >> action;
			if (action == "heal") {
				player.heal();
				action = "fight";
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


// Old combat system
/*void fight(Player &player, Zombie &zombie) {
	int zombiesKilled = 0;
//main game loop
    while (player.get_alive()==true && (player.get_fight() + player.get_flight()) < zombie.get_zombieCount() && player.get_hp() > 0) {
    	string fightFlight;
    	int zombieSkill = zombie.createZombie();

    	//playerHp = player.get_hp();

    	if (player.get_hp() < player.get_initHp()/2) {
    		player.set_str( player.get_str() - 2);
    		player.set_spd( player.get_str() - 3);
    	}

    	//battle sequence

    	if  (zombieSkill > 10) {
    		cout << endl << "Here comes a huge zombie!" << endl;
    	} 

    	else {
    		cout<<endl<< "Here comes zombie "<< (player.get_fight() + player.get_flight())+1<<endl;
    	}

    	cout << "Will you fight or run? "<< endl;
    	cout << "stats for your current stats" << endl;
    	cin >> fightFlight;

    	if (fightFlight == "stats") {
    		player.get_stats();
    		cout << "Will you fight or run? "<< endl;
    		cin >> fightFlight;
    		cout << endl;
    	}

    	if (fightFlight == "run") {

    		if (player.get_spd() >= zombieSkill) {
    			cout << "Running from the zombie"<< endl;
    			fightFlight = "";
    			//zombiesKilled++;
    			player.set_flight();
    			zombie.update_zombieCount();
    			continue;
    		}

    		else {
    			cout << "Could not run from the zombie." << endl;
    			fightFlight = "fight";
    		}
    	}

    	if (fightFlight == "fight" ) {

	    	cout << "Fighting..."<< endl;

	    	sleep(2);

	    	if (player.get_str() < zombieSkill) {
	    		player.set_alive(false);
	    		player.set_hp(0);
	    		cout << "You have died." << endl;
	    		cout << endl;
	    	} 

	    	else {

	    		if (player.get_str() - zombieSkill > 7) {
	    			cout << "You wasted the zombie!" << endl;
	    			cout << endl;
	    			player.set_score(2);
	    		} 

	    		else if (player.get_str() - zombieSkill > 5) {
	    			cout << "You decapitated teh zombie!" << endl;
	    			cout << endl;
	    			player.set_score(2);
	    		} 

	    		else if (player.get_str() - zombieSkill > 0) {
	    			cout << "You killed the zombie!" << endl;
	    			cout << endl;
	    			player.set_score(2);
	    			player.set_hp(player.get_hp() - 1);
	    		} 

	    		else {
	    			cout << "You killed the zombie, but suffered injuries." << endl;
	    			cout << endl;
	    			player.set_hp(player.get_hp() - 2);
	    		}
	    		zombiesKilled = player.get_fight()+player.get_flight();
	    		player.set_fight();
	    		zombie.update_zombieCount();
	    	}
    	}

    	cout << endl;
    	sleep(1);
    }
}*/