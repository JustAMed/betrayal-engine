#include "engine.h"
#include "competitor.h"
#include <vector>

void removeDead(std::vector<Competitor> &players) {
  std::erase_if(
    players,
    [](const Competitor &c) {
    return c.currentHealth <= 0;      
    }
  );
}
