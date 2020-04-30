#ifndef BOARD_H
#define BOARD_H
#include "player.h"

enum class Result { NotFinished, Win, Draw };

class Board
{
public:
    Board(int dimension);
    virtual ~Board();
    void showBoard() const;
    bool setMarker(int position, char marker);
    Result checkWin(const Player & player) const;
private:
    const int m_dimension;
    int m_numMarkersOnBoard;
    char ** m_board;
};

#endif // BOARD_H
