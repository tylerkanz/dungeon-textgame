#include<iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int health = 100;

void lvl1_attack() {
	health - 1;
}

void lvl2_attack() {
	health - 5;
}

void lvl3_attack() {
	health - 10;
}

void lvl4_attack() {
	health - 15;
}

void lvl5_attack() {
	health - 20;
}

void lvl6_attack() {
	health - 20;
}