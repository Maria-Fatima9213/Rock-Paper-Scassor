#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to get the computer's choice (random number between 1 and 3)
int getComputerChoice() {
    return (rand() % 3) + 1; // Generates 1, 2, or 3
}

// Function to get the player's choice
int getPlayerChoice() {
    int choice;
    do {
        cout << "Enter your choice (1-3): ";
        cin >> choice;
        if (cin.fail() || choice < 1 || choice > 3) {
            cin.clear();            // Clear the error flag
            cin.ignore(1000, '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a number between 1 and 3." << endl;
        }
    } while (choice < 1 || choice > 3); // Loop until valid input is given
    return choice;
}

// Function to determine the winner
void determineWinner(int playerChoice, int computerChoice) {
    if (playerChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    }
    else if ((playerChoice == 1 && computerChoice == 3) ||  // Rock beats Scissors
        (playerChoice == 2 && computerChoice == 1) ||  // Paper beats Rock
        (playerChoice == 3 && computerChoice == 2)) {  // Scissors beat Paper
        cout << "You win!" << endl;
    }
    else {
        cout << "Computer wins!" << endl;
    }
}

// Function to map choice numbers to their names
string getChoiceName(int choice) {
    switch (choice) {
    case 1: return "Rock";
    case 2: return "Paper";
    case 3: return "Scissors";
    default: return "Unknown";
    }
}
