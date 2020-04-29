#ifndef COMPUTER_H
#define COMPUTER_H
#include "player.h"

class Computer : public Player
{
public:
    Computer(Marker marker, int dimension);
    virtual ~Computer();
    int move() const override;
    bool isComputer() const override;
private:
    const int m_dimension;
};

#endif // COMPUTER_H
