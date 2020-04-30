## Tic Tac Toe game
In this game user plays against computer. First, user selects dimensions of the board (NxN grid), then selects its marker (X or O). X marker always starts first. Players alternate placing Xs and Os on the board. Wins that one player that first has N markers in a row (horizontally, vertically, or diagonally). If the board is full but neither of the players has made a complete row of Xs or Os, then it's a draw.

## Implementation
To open project in CodeBlocks, go to File -> Open and select TicTacToe.cbp file. It consists of 5 classes:
### Player
Abstract class that represents a player. It has the following methods:
#### `virtual int move() const = 0`
Returns position on a board on which player wants to put his marker. Has to be overriden in derived class.
#### `virtual bool isComputer() const = 0`
Inidicates wheather player is a computer. Has to be overriden in derived class
#### `Marker getMarker()`
Returns marker used by player represented by enum class Marker:
```c++ 
enum class Marker {X = 'X', O = 'O'};
```
### User
Represents user and inherits from class Player. It has the following methods:
#### `int move() const override`
Overrides corresponding method in the base class. Asks user to enter position where he wants to put his marker. Returns provided position.
#### `bool isComputer() const override`
Overrides corresponding method in the base class. Returns false.
### Computer
Represents computer and inherits from Player class. It has the following methods:
#### `int move() const override`
Overrides corresponding method in the base class. Randomly chooses position on board to put marker using `rand()` funtion from `<cstdlib>`.
#### `bool isComputer() const override`
Overrides corresponding method in the base class. Returns true.
### Board
Stores a board as a 2-dimensional array of chars. It has the following methods:
#### `void showBoard() const`
Displays board in a console. For exampe for 3x3 grid:
<pre><p>
   |   |
 1 | X | 3
___|___|___
   |   |
 4 | 5 | O
___|___|___
   |   |
 7 | 8 | 9
   |   |
</p></pre>
Uses `system("cls")` to clear the console.
#### `bool setMarker(int position, char marker)`
Sets a given marker on a given position on the board. Returns false if a given position in already taken and true otherwise.
#### `Result checkWin(const Player & player) const`
Checks if a given player has won, drawn or a game is not finished yet. Returns corresponding value of enum class Result:
```c++
enum class Result { NotFinished, Win, Draw };
```
### Game
Controls the game. It has the following methods:
#### `void play()`
Starts the game and controlls its flow.
#### `void move(const Player * player)`
Private method. Calls player->move() until player will provide position on a board that is free.
