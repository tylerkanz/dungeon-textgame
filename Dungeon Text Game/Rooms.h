#include<iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;


//This is where we will put room functions

void arlington() {

}

void cave_start() {

}

void start() {
	int choice;
	cout << "Its a foggy wet night on the road and you come to a crossroads with a tavern on the right." << endl;
	cout << "(1) Take the left path to Arlington."<< endl;
	cout << "(2) Take the right path to the spooky cave." << endl;
	cin >> choice;

	if (choice == 1) {
		cout << "It worked" << endl;
	}

	else if (choice == 2) {
		cave_start();
	}

	else
		cout << "Not a valid response.";
}

void start_menu() {
	int choice;
	cout << "Welcome to the Cave!" << endl;
	cout << "Enter (1) to begin your adventure!" << endl;
	cout << "Enter (2) to exit." << endl;
	cin >> choice;

	if (choice == 1) {
			start();
		}

		else if (choice == 2) {
			cave_start();
		}

		else
			cout << "Not a valid response.";

}




void end_room() {

}

