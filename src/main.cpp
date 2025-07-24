#include "ui.hpp"
#include <vector>

int main() {
    UI ui;

    std::vector<std::vector<LetterTile>> board = {
        { {'C'}, {'A'}, {'T'} },
        { {'D', false, true}, {'O'}, {'G'} },
        { {'B'}, {'A'}, {'T', true} }
    };

    Position cursor = {1, 2};

    ui.clearScreen();
    ui.drawTitle();
    ui.drawScore(15);
    ui.drawGrid(board, cursor);

    return 0;
}
