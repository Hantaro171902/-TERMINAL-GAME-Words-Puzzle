#include "ui.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

// ANSI colors
#define RESET      "\033[0m"
#define RED        "\033[1;31m"
#define GREEN      "\033[1;32m"
#define CYAN       "\033[1;36m"
#define YELLOW     "\033[1;33m"
#define BOLD       "\033[1m"
#define REVERSE    "\033[7m"

void UI::clearScreen() {
    cout << "\033[2J\033[H";  // Clear screen + move cursor to top-left
}

void UI::drawTitle() {
    cout << BOLD << CYAN;
    cout << "==========================" << endl;
    cout << "     TERMINAL WORD PUZZLE" << endl;
    cout << "==========================" << RESET << endl;
}

void UI::drawScore(int score) {
    cout << YELLOW << "Score: " << score << RESET << "\n" << endl;
}

void UI::drawGrid(vector<vector<LetterTile>>& board, Position& cursor) {
    for (size_t r = 0; r < board.size(); ++r) {
        for (size_t c = 0; c < board[r].size(); ++c) {
            const auto& tile = board[r][c];
            bool isCursor = (cursor.row == (int)r && cursor.col == (int)c);

            if (isCursor)
                cout << REVERSE;

            if (tile.bonus)
                cout << GREEN;
            else if (tile.selected)
                cout << RED;

            cout << " " << tile.letter << " " << RESET;
        }
        cout << endl;
    }
}