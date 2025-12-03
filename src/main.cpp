#include <iostream>
#include <vector>
#include "competitor.h"
#include "engine.h"

int main()
{
    std::vector<Competitor> tributes;

    tributes.push_back(Competitor("Katniss", 100));
    tributes.push_back(Competitor("Peeta", 0));  // already dead
    tributes.push_back(Competitor("Cato", 50));

    std::cout << "Before removeDead:\n";
    for (const auto &c : tributes)
    {
        std::cout << c.name << " (HP: " << c.currentHealth << ")\n";
    }

    removeDead(tributes);

    std::cout << "\nAfter removeDead:\n";
    for (const auto &c : tributes)
    {
        std::cout << c.name << " (HP: " << c.currentHealth << ")\n";
    }

    return 0;
}

