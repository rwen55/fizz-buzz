#include <iostream>;

using namespace std;

int main() {
	// establish variables

	int totalBees; // int variable to hold user input
	double beeNum = 1; // double variable used to create division conflict and act as a counter

	// ask for user input

	cout << "Enter a number greater than 0:" << endl;
	cin >> totalBees;
	cout << endl;
	if (totalBees <= 0) { // if the input is invalid (less than or equal to 0), print error message and stop the program
		cout << "Invalid input." << endl;
		return 0;
	}

	// calculate divisibility and print fizz/buzz/fizz buzz

	while (beeNum <= totalBees) { // while loop used for checking all numbers from (1 - totalBees)
		// setup divisibility checks
		int test3 = beeNum / 3;
		int test5 = beeNum / 5;
		int test15 = beeNum / 15;
		// calculate divisibility (if int division matches proper division) and print
		if (test15 == beeNum / 15)		// if the number is divisible by 15, print "Fizz Buzz"
			cout << "Fizz Buzz" << endl;
		else if (test5 == beeNum / 5)	// if the number is divisible by 5, print "Buzz"
			cout << "Buzz" << endl;
		else if (test3 == beeNum / 3)	// if the number is divisible by 3, print "Fizz"
			cout << "Fizz" << endl;
		else							// otherwise, just print the number
			cout << beeNum << endl;
		// proceed to next beeNum by incrementing counter
		beeNum++;
	}
	return 0;
}