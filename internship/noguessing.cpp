#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Hey there! Ready to play a little guessing game?\n";
    cout << "I've picked a number between 1 and 100... let's see if you can figure it out!\n";

    while (true) {
        cout << "\nTake a guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Hmm... that's a bit low. Try aiming higher!";
        } else if (guess > secretNumber) {
            cout << "Whoa there, too high! Bring it down a notch.";
        } else {
            cout << "\nYou nailed it! My secret number was " << secretNumber << ".\n";
            cout << "And you did it in just " << attempts << " attempt" << (attempts > 1 ? "s" : "") << "!\n";
            break;
        }
    }

    cout << "\nThanks for playing! Let's do it again sometime.\n";
    return 0;
}