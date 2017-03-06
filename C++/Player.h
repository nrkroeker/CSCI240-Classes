//If undefined, create header
#ifndef PLAYER_H
#define PLAYER_H

class Player {

  private:
    int shotNum;
    std::string letterScore;

  public:
    //Constructors
    Player();

    //Deconstructor
    ~Player()

    //Class methods
    void shoot();
    void onWin();

#endif
