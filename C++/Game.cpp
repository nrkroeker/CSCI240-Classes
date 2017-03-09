// Honor Pledge: I pledge that I have neither given nor received any help on this assignment

#include "Player.h"
#include <iostream>
#include <string>

int main() {
	// Variable declarations
	char repeat;
	std::string scoreWord = "HORSE";

	do {
		// Create random seed and objects
		srand(time(NULL));
		Player * firstPlayer = new Player;
		Player * secondPlayer = new Player;

		// Loop for each shot
		do {
			std::cout << "Player 1:" << std::flush;
			firstPlayer->shoot();

			std::cout << "Player 2:" << std::flush;
			secondPlayer->shoot();

			// Check if they add letter and who
			if(firstPlayer->shotNum > 4 && secondPlayer->shotNum <= 4) {
					int firstCounter = firstPlayer->score.length();
					firstPlayer->score += scoreWord[firstCounter];
					std::cout << "\tFirst player adds " << scoreWord[firstCounter] << std::endl;
			} else if(secondPlayer->shotNum > 4 && firstPlayer->shotNum <=4) {
					int secondCounter = secondPlayer->score.length();
					secondPlayer->score += scoreWord[secondCounter];
					std::cout << "\tSecond player adds " << scoreWord[secondCounter] << std::endl;
			}

		// Ends the loop when one person loses
		} while (firstPlayer->score != "HORSE" && secondPlayer->score != "HORSE");

		// Check who lost
		if(firstPlayer->score == "HORSE") {
			std::cout << "\n\nPlayer two wins!\n\n" << std::endl;
		}
		else if(secondPlayer->score == "HORSE") {
			std::cout << "\n\nPlayer one wins!\n\n" << std::endl;
		}
		else {
			std::cout << "Something broke when checking who won." <<std::endl;
		}

		// Clean up memory
		delete firstPlayer;
		delete secondPlayer;

		// Repeat
		std::cout << "Would you like to play again? Y/N > " << std::flush;

		// Check input format
		do {
			std::cin >> repeat;
			repeat = toupper(repeat);
			if(repeat != 'Y' && repeat != 'N') {
				std::cout << "Please use Y/N format >" << std::endl;
			}
		} while (repeat != 'Y' && repeat != 'N');
	} while (repeat == 'Y');

	return 0;
}
