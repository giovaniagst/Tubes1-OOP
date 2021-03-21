// Ice.cpp
#include "Ice.hpp"
#include <iostream>

using namespace std;

Ice::Ice(string name, string* parentname, string* parentspecies, Skill* skill, int numskill) :
Engimon(name, parentname, parentspecies, skill, {"Ice", ""}, numskill) {
    //
}

Ice::Ice(const Ice& i) : Engimon(i.getName(), i.getParentName(), i.getParentSpecies(), i.getSkill(), {"Ice", ""}, i.getNumSkill()) {
    //
}

Ice::~Ice() {
    //
}

Ice& Ice::operator=(const Ice& i) {
    Engimon::operator=(i)
    return *this;
}