#include <iostream>
using namespace std;
int main() {
	bool playagain = true;
	int replaySelection;
	while (playagain) {
		int sticks = 23;
		int playerSelection;
		int computerSelection;
		cout << "Lets play a game of 23! We have 23 sticks, and you can pick up a maximum of 4 sticks and no passes! Whoever picks up the last stick loses" << endl;
		do{
			cout<< "Enter the number of sticks you wish to pick: " << endl;
			cin >> playerSelection;
			if (playerSelection > sticks || playerSelection > 3 || playerSelection < 1) {
				cout << "That was an invalid amount of sticks, please try again." << endl;
				continue;
			}
			if (playerSelection == sticks) {
				cout << "You lose! Better luck next time!" << endl;
				break;
			}
			sticks -= playerSelection;
			cout << "You picked up " << playerSelection << " sticks. There are " << sticks << " remaining." << endl;
			if (sticks > 4) {
				computerSelection = 4 - playerSelection;
			}
			else if (sticks <= 4 && sticks > 1) {
				computerSelection = sticks - 1;
			}
			else if (sticks == 1) {
				computerSelection = 1;
			}
			if (sticks == computerSelection) {
				cout << "I pick up " << computerSelection << " sticks, oh drat! I lost!";
				break;
			}
			sticks -= computerSelection;
			cout << "I pick up " << computerSelection << " sticks. There are " << sticks << " remaining."<<endl;
		}while (sticks > 0);
		cout << "Would you like to play again? 1 for yes, 2 for no." << endl;
		cin >> replaySelection;
		switch (replaySelection) {
			case 1: 
				playagain = true;
				break;
			case 2: playagain = false;
				break;
			default: 
				cout << "That was an invalid selection, would you like to play again? 1 for Yes, 2 for No." << endl;
				cin >> replaySelection;
				break;
		}
	}
	return 0;
}