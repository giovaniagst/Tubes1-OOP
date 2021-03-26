// Inventory.hpp
#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include "../Skill/SkillItem.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

template<class T>
class Inventory
{
private:
    vector<T> items;
    int neff;
    const int MAX =100;
public:

    inline static int used = 0;
    int getNeff(){
        return this->neff;
    }
    T getItem(int x){
        return this->items.at(x);   
    }
    T first() const{
        return this->items.at(this->items.begin());
    }

    void push(T const& t){
        if (used < MAX) {
            this->items.push_back(t);
            neff+=1;
            used+=1;
        }
    }
    T pop(T){
        if (used > 0 && neff > 0){
            
            neff-=1;
            used-=1;
            return this->items.pop_back();
        }
    }
    void erase(int x) {
        try{
            this->items.erase(x);
        }catch (...){
            cout << "object not found" << endl;
        }
    }

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