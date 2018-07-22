// Taking Damage
// Demonstrates function inlining

#include <iostream>

int radiation(int health);

using namespace std;

int radiation(int health);

void TakingDamage()
{
    int health = 80;
    cout << "Your health is " << health << "\n\n";
    
    health = radiation(health);
    cout << "After radiation exposure your health is " << health << "\n\n";
    
    health = radiation(health);
    cout << "After radiation exposure your health is " << health << "\n\n";
    
    health = radiation(health);
    cout << "After radiation exposure your health is " << health << "\n\n";
}

inline int radiation(int health)
{
    return (health / 2);
}
