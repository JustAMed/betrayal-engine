#pragma once
#include <string>
using std::string;

class Competitor {
  public:
    string name;
    int maxHealth;
    int currentHealth;
    bool isAlive;
    
    Competitor(const string& n, int health);
    void takeDamage(int dmg);
    void heal(int hel);
};
