#include "../include/player.h"
#include <iostream>
using namespace std;


Player::Player() {}

int Player::get_str() {
	return playerStr;
}
int Player::get_spd() {
	return playerSpd;
}
int Player::get_hp() {
	return playerHp;
}
int Player::get_initHp() {
	return playerHp_init;
}
int Player::get_alive() {
	return playerAlive;
}
int Player::get_score() {
	return playerScore;
}
int Player::get_fight() {
	return fight;
}
int Player::get_flight() {
	return flight;
}
int Player::get_diffHp() {
	return playerHp_init - playerHp;
}
int Player::get_heals() {
	return heals;
}
void Player::set_hp(int hp) {
	playerHp = playerHp - hp;
}
void Player::set_str(int str) {
	playerStr = str;
}
void Player::set_spd(int spd) {
	playerSpd = spd;
}
void Player::set_alive(int tf) {
	playerAlive = tf;
}
void Player::set_score(int score) {
	playerScore = playerScore+score;
}
void Player::set_flight() {
	flight=flight+1;
}
void Player::set_fight() {
	fight=fight+1;
}
void Player::heal() {
	playerHp = playerHp_init;
	heals = heals - 1;
}

void Player::set_ailment(int special, int len) {
	status_ailment = special;
	ailment_len = len;
}

void Player::update_ailment() {
	if (ailment_len == 0 && status_ailment != 0) {
		status_ailment = 0;
	}
	if (ailment_len != 0 && status_ailment != 0) {
		check_ailment();
		ailment_len = ailment_len - 1;
	}
}

void Player::check_ailment() {
	if (status_ailment == 2) {
		playerHp = playerHp - 1;
	}
}

void Player::set_name(string name) {
	name = name;
}

void Player::get_stats() {
    cout << "HP: " << playerHp << endl;
	cout << "SPD: " << playerSpd << endl;
    cout << "STR: " << playerStr  << endl;
    cout << "Ailment" << status_ailment << endl;
    cout << endl;
}
