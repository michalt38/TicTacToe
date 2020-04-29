#ifndef USER_H
#define USER_H
#include "player.h"

class User : public Player
{
public:
    User(Marker marker);
    virtual ~User();
    int move() const override;
    bool isComputer() const override;
};

#endif // USER_H
