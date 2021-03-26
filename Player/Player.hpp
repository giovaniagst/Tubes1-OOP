// Engimon.hpp
#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include <string>
#include "../Engimon/Species.hpp"
#include "../Map/Map.hpp"
#include "../Skill/SkillItem.hpp"
#include "../Inventory/Inventory.hpp"
#include<vector> // for array, at()
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
    Inventory<Engimon> getlistEngimon();
    int getJumlahEngimon();
    Engimon getActiveEngimon();

    void move(Map* x, string command);
    void addEngimon(Engimon e);
    void battle(Engimon lawan);
    void printlistEngimon();
    void printActiveEngimon();
    void changeActiveEngimon(int pos);
    void doBreeding(string Engimon1, string Engimon2);
    int sumSkill(Engimon me);
    float compareElementAd(string* myEl,string* enemyEl);
    float imax(int x, int y);
    int intmax(int x, int y);
    string smax(string x, string y);
    float compareElement(string x, string y);
    // void skill();
   
    // void battle();
    // Inventory<typename,int> getInventory();

  private:
    string nama;
    Inventory<Engimon> engimonKepemilikan;
    Inventory<SkillItem> SkillItem;
    int jumlahEngimonKepemilikan;
    Engimon activeEngimon;
    // Inventory<typename T, int x>;
};
  
#endif