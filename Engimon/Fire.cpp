// Fire.cpp
#include "Fire.hpp"
#include <iostream>

using namespace std;

Fire::Fire(string name, string* parentname, string* parentspecies, Skill* skill, int numskill) :
Engimon(name, parentname, parentspecies, skill, {"Fire", ""} , numskill) {
    //
}

Fire::Fire(const Fire& f) : Engimon(f.getName(), f.getParentName(), f.getParentSpecies(), f.getSkill(), {"Fire", ""}, f.getNumSkill()) { 
    //
}

Fire::~Fire() {
    //
}

Fire& Fire::operator=(const Fire& f) {
    Engimon::operator=(f);
    return *this;
}