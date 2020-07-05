#!/usr/bin/env bash
clear
clear
##g++ main.cpp -ldialog -lncursesw
g++ ./src/zombie-war.cpp ./src/Monster.cpp ./src/zombie.cpp ./src/player.cpp ./src/combat.cpp -o zombie-war.a
