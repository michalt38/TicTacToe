#include <iostream>
#include "game.h"
using namespace std;

int main()
{
    cout << "Enter size of one dimension of the board: ";
    int dimension;
    cin >> dimension;
    cout << "Enter your marker (X or O): ";
    char marker;
    cin >> marker;
    while(!(marker == 'X' || marker == 'O'))
    {
        cout << "Wrong marker! Choose between X and O: ";
        cin >> marker;
    }
    Marker userMarker = (Marker)marker;
    Game game(dimension, userMarker);
    game.play();
    system("pause");
}
