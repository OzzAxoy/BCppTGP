#include <iostream>

using namespace std;

void Exercise1()
{
    cout << "Difficulty Levels\n\n";
    cout << "1 - Easy\n";
    cout << "2 - Normal\n";
    cout << "3 - Hard\n\n";
    
    enum Difficulty {Easy = 1, Normal, Hard };
    
    int choice;
    cout << "Choice: ";
    cin >> choice;
    
    switch(choice)
    {
        case Easy:
            cout << "You picked Easy.\n";
            break;
        case Normal:
            cout << "You picked Normal.\n";
            break;
        case Hard:
            cout << "You picked Hard.\n";
            break;
        default:
            cout << "You made an illegal choice.\n";
    }
}
