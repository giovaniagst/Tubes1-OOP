// Engimon.hpp
#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include <string>
#include "Engimon.hpp"
#include "Map.hpp"
using namespace std;

// Inventory<Engimon, >
class Player {
  public:
    // ctor, cctor, dtor, operator
    Player();
    Player(string name);
    // Player(const Player&);
    ~Player();
    // Player& operator=(const Player&);
    
    // getter & setter

    string getName();
    Engimon getEngimon();
    void move(Map  x, string command);
    void battle();
    void listEngimon();
    void whatEngimon();
    void changeEngimon();
    void doBreeding();
    void skill();
    void battle();
    // Inventory<typename,int> getInventory();

  private:
    string nama;
    Engimon* EngimonKepemilikan;
    // Inventory<typename T, int x>;
};
  
#endif