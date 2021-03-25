// Inventory.cpp

#include "Inventory.hpp"
using namespace std;

int Inventory::maxCapacity = 100;

Inventory::Inventory() {
    
}
Inventory::Inventory(Engimon engimon, SkillItem skill) {
    inventoryEngimon.push_back(engimon);
    inventorySkillItem.push_back(skill);
    currentIdx += 2;
}
Inventory::~Inventory() {

}   

// getter and setter
list<Engimon> Inventory::getEngimon() {
    return inventoryEngimon;
}
list<SkillItem> Inventory::getSkillItem() {
    return inventorySkillItem;
}
void Inventory::addEngimon(Engimon engimon) {
    if (maxCapacity < currentIdx) {
        inventoryEngimon.push_back(engimon);
        currentIdx += 1;
    }
    
}
void Inventory::addSkillItem(SkillItem skill) {
    if (maxCapacity < currentIdx) {
        inventorySkillItem.push_back(skill);
        currentIdx += 1;
    }
    
}
void Inventory::removeEngimon(Engimon engimon) {
    list<Engimon>::iterator findEngimon = find(inventoryEngimon.begin(), inventoryEngimon.end(), engimon);
    inventoryEngimon.erase(findEngimon);
    currentIdx -= 1;
}
void Inventory::removeSkillItem(SkillItem skill) {
    list<SkillItem>::iterator findSkillItem = find(inventorySkillItem.begin(), inventorySkillItem.end(), skill);
    inventorySkillItem.erase(findSkillItem);
    currentIdx -= 1;
}
