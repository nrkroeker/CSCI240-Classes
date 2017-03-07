// Honor Pledge: I pledge that I have neither given nor received any help on this assignment

//If undefined, create header
#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <time.h>
#include <stdlib.h>
#include <iostream>


class Player {

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
