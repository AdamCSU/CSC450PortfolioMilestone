//============================================================================
// Name        : CSC450PortfolioMilestone.cpp
// Author      : Adam Gorry
// Version     :
// Copyright   : Your copyright notice
// Description : CSC450 Portfolio Milestone
//============================================================================

#include <iostream>
#include <thread>
#include <string>
using namespace std;

void countingUp() {  //Function for counting up from 1 to 20
	for (int i = 1; i <= 20; i++) {
		cout << "Counting up: " << i << endl;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
}

void countingDown() {  //Function for counting down from 20 to 0
	for (int i = 20; i >= 0; i--) {
		cout << "Counting down: " << i << endl;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
}

int main() {
}
