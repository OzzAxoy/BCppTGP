#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Exercise3()
{
    srand(static_cast<unsigned int>(time(0)));  // seed a random number generator
    
    int guess;
    
    int tries = 0;
    int secretNumber;
    
    cout << "Enter a number: ";
    cin >> secretNumber;
    
    cout << "\tWelcome to Guess My Number\n\n";
    
    do
    {
        guess = rand() % 100 + 1;  // random number between 1 and 100
        cout << "Computer guesess the number: " << guess << endl;
        ++tries;
        
        if(guess > secretNumber)
        {
            cout << "Too High!\n\n";
        }
        else if(guess < secretNumber)
        {
            cout << "Too low!\n\n";
        }
        else
        {
            cout << "\nThat's it! You got it in " << tries << " guesses!\n";
        }
    } while(guess != secretNumber);
    
}