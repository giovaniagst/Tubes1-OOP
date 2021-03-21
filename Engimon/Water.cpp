// Water.cpp
#include "Water.hpp"
#include <iostream>

using namespace std;

Water::Water(string name, string* parentname, string* parentspecies, Skill* skill, int numskill) :
Engimon(name, parentname, parentspecies, skill, {"Water", ""} , numskill) {
    //
}

Water::Water(const Water& w) : Engimon(w.getName(), w.getParentName(), w.getParentSpecies(), w.getSkill(), {"Water", ""}, w.getNumSkill()) { 
    //
}

Water::~Water() {
    //
}

Water& Water::operator=(const Water& w) {
    Engimon::operator=(w);
    return *this;
}