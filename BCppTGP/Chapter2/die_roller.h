// Die Roller
// Demonstrates generating random numbers

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void DieRoller()
{
    // Maximum random number: cout << RAND_MAX; --> 32767
    srand(static_cast<unsigned int>(time(0)));  // seed a random number generator
    
    int randomNumber = rand();  // generate random number
    
    int die = (randomNumber % 6) + 1;   // get a number between 1 and 6
    cout << "You rolled a " << die << endl;
}