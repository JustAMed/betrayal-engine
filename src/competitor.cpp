#include "competitor.h"
#include <string>
using std::string;

Competitor::Competitor(const string& n, int health)
  : name(n), maxHealth(health), currentHealth(health), isAlive(true) {}

void Competitor::takeDamage(int dmg) {
  currentHealth -= dmg;
  if (currentHealth <= 0) {
    isAlive = false;
  }
}

