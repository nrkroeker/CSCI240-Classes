// Honor Pledge: I pledge that I have neither given nor received any help on this assignment

#include "Player.h"
#include <iostream>
#include <string>

int main() {
	char repeat;
	std::string scoreWord = "HORSE";

	do {
		srand(time(NULL));
		Player * firstPlayer = new Player;
		Player * secondPlayer = new Player;

		do {
			std::cout << "Player 1:" << std::flush;
			firstPlayer->shoot();

			std::cout << "Player 2:" << std::flush;
			secondPlayer->shoot();

			if(firstPlayer->shotNum > 4 && secondPlayer->shotNum <= 4) {
					int firstCounter = firstPlayer->score.length();
					firstPlayer->score += scoreWord[firstCounter];
					std::cout << "\tFirst player adds " << scoreWord[firstCounter] << std::endl;
			} else if(secondPlayer->shotNum > 4 && firstPlayer->shotNum <=4) {
					int secondCounter = secondPlayer->score.length();
					secondPlayer->score += scoreWord[secondCounter];
					std::cout << "\tSecond player adds " << scoreWord[secondCounter] << std::endl;
			}

		} while (firstPlayer->score != "HORSE" && secondPlayer->score != "HORSE");

		if(firstPlayer->score == "HORSE") {
			std::cout << "\n\nPlayer two wins!\n\n" << std::endl;
		}
		else if(secondPlayer->score == "HORSE") {
			std::cout << "\n\nPlayer one wins!\n\n" << std::endl;
		}
		else {
			std::cout << "Something broke when checking who won." <<std::endl;
		}

		delete firstPlayer;
		delete secondPlayer;

		std::cout << "Would you like to play again? Y/N > " << std::flush;
		std::cin >> repeat;
		repeat = toupper(repeat);
	} while (repeat == 'Y');

	return 0;
}
