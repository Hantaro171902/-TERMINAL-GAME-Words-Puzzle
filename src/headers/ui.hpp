#ifdef UI_H
#define UI_H

#include <vector>
#include <string>

struct Position {
    int row;
    int col;
};

struct LetterTile {
    char letter;
    bool selected = false;
    bool bonus = false;
};

class UI {
public:
    void clearScreen();
    void drawGrid(std::vector<std::vector<LetterTile>>& board, Position& cursor);
    void drawTitle();
    void drawScore(int score);
}

#endif

