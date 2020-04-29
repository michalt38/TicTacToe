#ifndef GAME_H
#define GAME_H
#include "board.h"
#include "user.h"
#include "computer.h"

class Game
{
public:
    Game(int dimension, Marker playerMarker);
    virtual ~Game();
    void play();
private:
    void move(const Player * player);

    Board m_board;
    User m_user;
    Computer m_computer;
};

#endif // GAME_H
