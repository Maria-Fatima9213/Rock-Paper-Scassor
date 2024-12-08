#include "Game.h"
#include <iostream>

using namespace std;

int main() {
    int playerChoice, computerChoice;
    char playAgain;

    // Seed the random number generator
    srand(static_cast<unsigned>(time(0)));

    do {
        cout << "=== Rock, Paper, Scissors Game ===" << endl;
        cout << "1. Rock" << endl
            << "2. Paper" << endl
            << "3. Scissors" << endl;

        // Get choices
        playerChoice = getPlayerChoice();
        computerChoice = getComputerChoice();

        // Display choices
        cout << "You chose: " << getChoiceName(playerChoice) << endl;
        cout << "Computer chose: " << getChoiceName(computerChoice) << endl;

        // Determine winner
        determineWinner(playerChoice, computerChoice);

        // Ask to play again
        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;
        cout << endl;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!" << endl;
    return 0;
}
