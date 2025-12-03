#include <iostream>
#include <string>
#include <limits>
#include "competitor.h"
using std::cout;
using std::string;
using std::endl;
using std::cin;

void flushInput() {
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


int main() {
  string n;
  int h;
  cout << "Name: ";
  getline(cin, n);
  flushInput();

  cout << "Max Health: ";
  cin >> h;
  flushInput();

  Competitor them(n, h);
  while (true) {
    cout << "1. Take Health\nAnything else. Exit";
    int choice;
    cin >> choice;
    flushInput();

    switch (choice) {
      case 1:
        int thou;
        cout << "damage? ";
        cin >> thou;
        them.takeDamage(thou);
        cout << "Name: " << them.name << ", health: " << them.currentHealth << endl;
        break;
      default:
        return 0;
    }
  }
} 
