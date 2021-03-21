// Electric.cpp
#include "Electric.hpp"
#include <iostream>

using namespace std;

Electric::Electric(string name, string* parentname, string* parentspecies, Skill* skill, int numskill) :
Engimon(name, parentname, parentspecies, skill, {"Electric", ""}, numskill) {
    //
}
    
Electric::Electric(const Electric& e) : Engimon(e.getName(), e.getParentName(), e.getParentSpecies(), e.getSkill(), {"Electric", ""}, e.getNumSkill()) {
    //
}

Electric::~Electric() {
    //
}

Electric& Electric::operator=(const Electric& e) {
    Engimon::operator=(e);
    return *this;
}