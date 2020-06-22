#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <ctype.h>
#include "player.h"
#include "zombie.h"
#include "combat.h"

using namespace std;
// TODO make a fight class, with player and zombie sub classes

int main() {

	srand(time(NULL));
	char enter;

	//game stats
	Player player;
	Zombie zombie;

	string playerName = "";
	int zombieCount = 0;
	int zombiesKilled = 0;
	string fightFlight = "";

	int horde = false;

	//title
	cout << "Welcome to Zombie War." << endl << "Press [ENTER] to start.";
	cin.get(); // take in user input

	//player name
    cout << "Please enter your name: ";
    cin >> playerName;

    //ask how many zombies

    cout << "How many zombies do you wish to fight? ";
    cin >> zombieCount;

    cout << "Get ready to fight for your life, " << playerName << "!" << endl;

    zombie.set_numMonster(zombieCount);

    //fight(player, zombie);
    while (player.get_alive() == true && zombie.get_monsters_left() > 0) {
    	combat(player, zombie);
	}
    // end game
    if ((player.get_fight() + player.get_flight()) == zombie.get_monsters_left()) {
    	//victory
    	cout << "You have survived the onslaught!" << endl;
    }

    else {
    	//lost
    	cout << "You did not survive the zombie war." << endl;
    }

    cout << "Zombies killed: " << player.get_fight()  << endl;
    cout << "Zombies evaded: " << player.get_flight() << endl;
    cout << "Final score: " << player.get_score() << endl << endl;

    cout << "Stats: " << endl;
    cout << endl;
    player.get_stats();

};