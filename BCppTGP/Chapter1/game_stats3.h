// Game Stats 3.0
// Demonstrates constants

#include <iostream>

using namespace std;

void GameStats3()
{
    const int ALIEN_POINTS = 150;
    int aliensKilled = 10;
    int score = aliensKilled * ALIEN_POINTS;
    cout << "score: " << score << endl;
    
    enum difficulty {
                        NOVICE,
                        EASY,
                        NORMAL,
                        HARD,
                        UNBEATABLE
    };
    
    difficulty myDifficulty = EASY;
    
    enum shipCost {
                        FIGHTER_COST = 25,
                        BOMBER_COST,
                        CRUISER_COST = 50
    };
    
    shipCost myShipCost = BOMBER_COST;
    cout << "\nTo upgrade my ship to Cruiser will cost "
              << (CRUISER_COST - myShipCost) << " Resource Points.\n";
}
