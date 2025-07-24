#ifndef GAME_H
#define GAME_H

#include <string>

using namespace std;

class LetterTile {
public:
    char letter;
    bool isSelected;

    LetterTile(char ch);
    void select();
    void deselect();
    bool selected() const;
    string getDisplayChar() const;
};

#endif
