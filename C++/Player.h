//If undefined, create header
#ifndef PLAYER_H
#define PLAYER_H

class Player {

  private:
    int shotNum;
    char[] letterScore;

  public:
    //Constructor
    Player();
    //Deconstructor
    ~Player()

    //Class methods
    void shoot();

#endif
