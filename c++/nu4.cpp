#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(0)));

    int numberToGuess = rand() % 100 + 1; // Random number between 1 and 100
    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;

    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < numberToGuess) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > numberToGuess) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;
            break;
        }
    }

    return 0;
}
