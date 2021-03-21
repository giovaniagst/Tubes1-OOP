// Ground.cpp
#include "Ground.hpp"
#include <iostream>

using namespace std;

Ground::Ground(string name, string* parentname, string* parentspecies, Skill* skill, int numskill) :
Engimon(name, parentname, parentspecies, skill, {"Ground", ""} , numskill) {
    //
}

Ground::Ground(const Ground& g) : Engimon(g.getName(), g.getParentName(), g.getParentSpecies(), g.getSkill(), {"Ground", ""}, g.getNumSkill()) { 
    //
}

Ground::~Ground() {
    //
}

Ground& Ground::operator=(const Ground& g) {
    Engimon::operator=(g);
    return *this;
}