#include "competitor.h"
#include <string>
using std::string;

Competitor::Competitor(const string& n, int health)
  : name(n), maxHealth(health), currentHealth(health), isAlive(true) {}

void Competitor::takeDamage(int dmg) {
  if (currentHealth <= 0) {
    isAlive = false;
  }
  else {
    currentHealth -= dmg;
  }
}

void Competitor::heal(int hel) {
  if (currentHealth != maxHealth && isAlive == true) {
    currentHealth += hel;
    if (currentHealth > maxHealth) {
      currentHealth = maxHealth;
    }
  }
}

