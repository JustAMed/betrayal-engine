#pragma once
#include <string>
#include <vector>
using std::vector;
using std::string;

class Competitor {
  public:
    vector<string> name;
    vector<int> maxHealth;
    vector<int> currentHealth;
    vector<bool> isAlive;
    
    Competitor() {};
    void addTribute(const string& n, int maxHp, int curHp, bool alive); 
};
