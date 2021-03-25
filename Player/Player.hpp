// Engimon.hpp
#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include <string>
#include "../Engimon/Engimon.hpp"
#include "../Map/Map.hpp"
#include<array> // for array, at()
#include<tuple> // for get()
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
    
    // getter & se-tter
    string getName();
    Engimon* getlistEngimon();
    int getJumlahEngimon();
    Engimon getActiveEngimon();

    void move(Map* x, string command);
    void addEngimon(Engimon e);
    void battle(Engimon lawan);
    void printlistEngimon();
    void printActiveEngimon();
    void changeActiveEngimon(string Engimon);
    void doBreeding(string Engimon1, string Engimon2);
    void skill();
   
    // void battle();
    // Inventory<typename,int> getInventory();

  private:
    string nama;
    array<Engimon,100> engimonKepemilikan;
    array<Skillitem,100> Skillitem;
    int jumlahEngimonKepemilikan;
    Engimon activeEngimon;
    // Inventory<typename T, int x>;
};
  
#endif