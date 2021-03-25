// Inventory.hpp
#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include "../Skill/SkillItem.hpp"
#include <iostream>
#include <string>
#include <list>
#include <iterator>
using namespace std;

template<class T>
class Inventory
{
private:
    list<T> items;
    int neff;
public:
    //getter
    int getNeff(){
        return this->neff;
    }
    T getItem(int){
        return this->items.   
    }
    T first() const;
    void push(T const&);
    void pop(T);
    void erase(int);

};



// Engimon berelemen Electric
// class Inventory {
//     public:
//         Inventory();
//         Inventory(Engimon engimon, SkillItem skill);
//         ~Inventory();

//         // getter and setter
//         list<Engimon> getEngimon();
//         list<SkillItem> getSkillItem();
//         void addEngimon(Engimon engimon);
//         void addSkillItem(SkillItem skill);
//         void removeEngimon(Engimon engimon);
//         void removeSkillItem(SkillItem skill);

//         static int getMaxCapacity();
    
//     private:
//         list<Engimon> inventoryEngimon;
//         list<SkillItem> inventorySkillItem;
//         static int maxCapacity;
//         int currentIdx;

// };


#endif