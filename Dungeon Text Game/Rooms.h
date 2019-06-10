#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void cave_start() {

}

//This is where we will put room functions

void crossroads() {

}

void tavern_corner() {

}

void tavern_socialize() {

}

void tavern() {
	int choice;
	cout << endl;
	cout << "To the tavern!" << endl;
	cout <<	"As you approach the tavern you can smell the scent of oaken caskets full of ale and cheap wine." << endl;
	cout << "(1) Sit by yourself in the corner."<< endl;
	cout << "(2) Sit at the bar and socialize." << endl;
	//Will add a leave the bar function later on.
	cin >> choice;

	if (choice == 1) {
		tavern_corner();
	}

	else if (choice == 2) {
		tavern_socialize();
	}

	else
		cout << endl;
		cout << "Not a valid response.";
		cout << endl;
}

void arlington() {
	int choice;
	cout << endl;
	cout << "As you walk into this small town you realize that there is only a single sign of life. A tavern with the lights on and music playing." << endl;
	cout << "(1) Enter the Tavern."<< endl;
	cout << "(2) Return to the crossroads." << endl;
	cin >> choice;

	if (choice == 1) {
		tavern();
	}

	else if (choice == 2) {
		crossroads();
	}

	else
		cout << endl;
		cout << "Not a valid response.";
		cout << endl;
}

void start() {
	int choice;
	cout << endl;
	cout << "Its a foggy wet night on the road and you come to a crossroads with a tavern on the right." << endl;
	cout << "(1) Take the left path to Arlington."<< endl;
	cout << "(2) Take the right path to the spooky cave." << endl;
	cin >> choice;

	if (choice == 1) {
		arlington();
	}

	else if (choice == 2) {
		cave_start();
	}

	else
		cout << endl;
		cout << "Not a valid response.";
		cout << endl;
}

void start_menu() {
	int choice;
	cout << "Welcome to The Cave!" << endl;
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
			cout << endl;
			cout << "Not a valid response." << endl;
			cout << endl;
			start_menu();
}

void end_room() {

}

