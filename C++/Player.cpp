// Honor Pledge: I pledge that I have neither given nor received any help on this assignment

#include "Player.h"
#include <ctime>
#include <cstdlib>
#include <iostream>

Player::Player() {
  this->shotNum = 0;
  this->score = "";
}

Player::~Player() {
  //deleteeeee the object
}

void Player::shoot() {
	this->shotNum = std::rand()%10;
	if(shotNum <= 4) {
		std::cout << "Hit shot!" << std::endl;
	}
	else if(shotNum > 4) {
		std::cout << "Missed shot!" << std::endl;
	}
	
}
