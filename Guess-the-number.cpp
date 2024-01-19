// GUESS THE NUMBER

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

void Easy(int choice, int playerChoice, int secretNumber) {
    cout << "You have 10 guesses for finding the secret number between 1 and 100" << endl;
    
    int guesses = 10;

    for (int i = 1; i <= 10; i++) 
    {
        cout << "\nEnter the number: ";
        cin >> playerChoice;

        if (playerChoice == secretNumber) 
        {
            cout << "Well played! You won, " << playerChoice << " is the secret number" << endl;
            cout << "Thanks for playing...." << endl;
            break;
        }

        else 
        {
            cout << "Nope, " << playerChoice << " is not the correct number" << endl;

            if (playerChoice > secretNumber) 
            {
                cout << "The secret number is smaller than the number you have chosen\n" << endl;
            }

            else
            {
                cout << "The secret number is greater than the number you have chosen\n" << endl;
            }

            guesses--;

            cout << guesses << " guesses left." << endl;

            if (guesses == 0) 
            {
                cout << "You couldn't find the secret number, it was " << secretNumber  << ", You lose!!\n\n";
                cout << "Play the game again to win!!!" << endl;
            }
        }
    }
}

void Medium(int choice, int playerChoice, int secretNumber) {
    cout << "You have 7 guesses for finding the secret number between 1 and 100" << endl;
    
    int guesses = 7;

    for (int i = 1; i <= 7; i++) 
    {
        cout << "\nEnter the number: ";
        cin >> playerChoice;

        if (playerChoice == secretNumber) 
        {
            cout << "Well played! You won, " << playerChoice << " is the secret number" << endl;
            cout << "Thanks for playing...." << endl;
            break;
        }

        else 
        {
            cout << "Nope, " << playerChoice << " is not the right number" << endl;

            if (playerChoice > secretNumber) 
            {
                cout << "The secret number is smaller than the number you have chosen\n" << endl;
            }

            else
            {
                cout << "The secret number is greater than the number you have chosen\n" << endl;
            }

            guesses--;

            cout << guesses << " guesses left. " << endl;

            if (guesses == 0) 
            {
                cout << "You couldn't find the secret number, it was " << secretNumber  << ", You lose!!\n\n";
                cout << "Play the game again to win!!!" << endl;
            }
        }
    }
}

void Hard(int choice, int playerChoice, int secretNumber) {
    cout << "You have 5 guesses for finding the secret number between 1 and 100" << endl;
    
    int guesses = 5;

    for (int i = 1; i <= 5; i++) 
    {
        cout << "\nEnter the number: ";
        cin >> playerChoice;

        if (playerChoice == secretNumber) 
        {
            cout << "Well played! You won, " << playerChoice << " is the secret number" << endl;
            cout << "Thanks for playing...." << endl;
            break;
        }

        else 
        {
            cout << "Nope, " << playerChoice << " is not the right number" << endl;

            if (playerChoice > secretNumber) 
            {
                cout << "The secret number is smaller than the number you have chosen\n" << endl;
            }

            else
            {
                cout << "The secret number is greater than the number you have chosen\n" << endl;
            }

            guesses--;

            cout << guesses << " guesses left. " << endl;

            if (guesses == 0) 
            {
                cout << "You couldn't find the secret number, it was " << secretNumber  << ", You lose!!\n\n";
                cout << "Play the game again to win!!!" << endl;
            }
        }
    }
}

void Quit(int choice, int playerChoice, int secretNumber) {
    
    if (choice == 4) 
    {
        exit(0);
    }

    else
    {
        cout << "Wrong choice, Enter a valid choice to play the game! (1, 2, 3, 4)"  << endl;
    }

}


int main() {

    cout << "\n<------- Welcome to the 'Guess the Number' game ------->" << endl << endl;
    cout << "RULES:- \n" 
    "1. You have to guess a number between 1 and 100.\n" 
    "2. You will have number of chances to guess the number depending on the difficulty of the level.\n"
    "3. You can choose any difficulty"
    << endl << endl;

    cout << "GOODLUCK!!" << endl << endl;

    // Selecting level
    cout << "Choose the difficulty of the level: \n";
    cout << "1 - EASY\t";
    cout << "2 - MEDIUM\t";
    cout << "3 - HARD\t";
    cout << "4 - QUIT\n" << endl;

    int choice;
    cout << "Enter the level of difficulty: ";
    cin >> choice;

    // Generating the number using random function
    srand(time(0));
    int secretNumber = 1 + (rand() % 100);

    // Player input
    int playerChoice;

    switch (choice)
    {
    case 1: Easy(1, playerChoice, secretNumber);
            break;

    case 2: Medium(2, playerChoice, secretNumber);
            break;

    case 3: Hard(3, playerChoice, secretNumber);
            break;

    case 4: Quit(4, playerChoice, secretNumber);
            break;
    }

    return 0;
}