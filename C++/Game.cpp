#include "Player.h"
#include <iostream>
#include <string>

int main() {
	
	char repeat;
	
	do {
		Player * firstPlayer = new Player();
		Player * secondPlayer = new Player();

		std::cout << firstPlayer->shotNum << std::endl;
		std::cout << secondPlayer->shotNum << std::endl;
	
	
		delete firstPlayer;
		delete secondPlayer;
		std::cout << "Would you like to play again? Y/N > " << std::flush;
		std::cin >> repeat;
	} while (repeat == 'Y');

	return 0;

}
