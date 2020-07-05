#!/usr/bin/env bash
clear
clear
##g++ main.cpp -ldialog -lncursesw
g++ zombie-war.cpp Monster.cpp zombie.cpp player.cpp combat.cpp -o zombie-war.a
