#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int health = 100;

void death() {
	if (health == 0)
		cout << "You have died!" << endl;
}

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

void defense(int m, int x) {
	x + m;
}

void strength(int m) {
	if (m = 1){
		lvl1_attack();
	}
	else if (m = 2) {
		lvl2_attack();
	}
	else if (m = 3) {
		lvl3_attack();
	}
	else if (m = 4) {
		lvl4_attack();
	}
	else if (m = 5) {
		lvl5_attack();
	}
	else if (m = 6) {
		lvl6_attack();
	}
	else {
		cout << "ATTACK FUNCTION FAILURE" << endl;
	}

}