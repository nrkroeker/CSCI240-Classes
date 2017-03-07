// Honor Pledge: I pledge that I have neither given nor received any help on this assignment

#include "Player.h"
#include <iostream>
#include <string>

int main() {	
	char repeat;
	std::string scoreWord = "HORSE";
	do {
		int firstScoreCount = 0;
		int secondScoreCount = 0;
		srand(time(NULL));
		Player * firstPlayer = new Player();
		Player * secondPlayer = new Player();
		
		do {
			firstPlayer->shoot();
			secondPlayer->shoot();
			if(firstPlayer->shotNum != secondPlayer->shotNum) {

				if(firstPlayer->shotNum > 4) {
					firstScoreCount++;
					firstPlayer->score += scoreWord[firstScoreCount];
				} else if(secondPlayer->shotNum > 4) {
					secondPlayer->score += scoreWord[secondScoreCount];
				}
				else {
					std::cout << "Something broke when adding letters to score." << std::endl;
				}
			}
		} while (firstPlayer->score != "HORSE" || secondPlayer->score != "HORSE");
		
		if(firstPlayer->score == "HORSE") {
			firstPlayer->onWin();
		}
		else if(secondPlayer->score == "HORSE") {
			secondPlayer->onWin();
		}
		else {
			std::cout << "Something broke when checking who won." <<std::endl;
		}


	
		delete firstPlayer;
		delete secondPlayer;
		std::cout << "Would you like to play again? Y/N > " << std::flush;
		std::cin >> repeat;
	} while (repeat == 'Y');

	return 0;

}
