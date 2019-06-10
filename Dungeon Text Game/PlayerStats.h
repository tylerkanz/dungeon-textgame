#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;


void death(int m) {
	if (m == 0)
		cout << "You have died!" << endl;
}

void attack(int m) {
	m - 1;
}

void defense(int m, int x) {
	x + m;
}
