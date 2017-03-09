// Honor Pledge: I pledge that I have neither given nor received any help on this assignment

// If undefined, define player
#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <time.h>
#include <stdlib.h>
#include <iostream>

// Class declaration
class Player {

  // Public variables
  public:
    int shotNum;
    std::string score;

    //Constructors
    Player();

    //Deconstructor
    ~Player();

    //Class methods
    void shoot();
};
#endif
