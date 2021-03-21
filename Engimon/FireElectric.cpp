// FireElectric.cpp
#include "FireElectric.hpp"
#include <iostream>

using namespace std;

FireElectric::FireElectric(string name, string* parentname, string* parentspecies, Skill* skill, int numskill) :
Engimon(name, parentname, parentspecies, skill, {"Fire", "Electric"} , numskill) {
    //
}

FireElectric::FireElectric(const FireElectric& fe) : Engimon(fe.getName(), fe.getParentName(), fe.getParentSpecies(), fe.getSkill(), {"Fire", "Electric"}, fe.getNumSkill()) { 
    //
}

FireElectric::~FireElectric() {
    //
}

FireElectric& FireElectric::operator=(const FireElectric& fe) {
    Engimon::operator=(fe);
    return *this;
}