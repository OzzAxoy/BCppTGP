// Inventory Displayer
// Demonstrate constant references

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// parameter vec is a constant reference to a vector of strings
void display(const vector<string>& inventory);

void InventoryDisplayer()
{
    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");
    
    display(inventory);
}

// parameter vec is a constant reference to a vector of strings
void display(const vector<string>& vec)
{
    cout << "Your items:\n";
    for(vector<string>::const_iterator iter = vec.begin(); iter != vec.end(); ++iter)
    {
        cout << *iter << endl;
    }
}