#ifndef PLAYER_H
#define PLAYER_H
#include <string>

enum class Marker {X = 'X', O = 'O'};

class Player
{
public:
    Player(Marker marker);
    virtual ~Player();
    virtual int move() const = 0;
    virtual bool isComputer() const = 0;
    virtual Marker getMarker() const;
protected:
    Marker m_marker;
};

#endif // PLAYER_H
