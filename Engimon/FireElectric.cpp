// FireElectric.cpp
#include "FireElectric.hpp"
#include <iostream>

using namespace std;

FireElectric::FireElectric(string name, string* parentname, string* parentspecies, int numskill) :
Engimon(name, parentname, parentspecies, numskill) {
    elements[0] = "Fire";
    elements[1] = "Electric";
}

FireElectric::FireElectric(const FireElectric& fe) : Engimon(fe) { 
    //
}

FireElectric::~FireElectric() {
    //
}

FireElectric& FireElectric::operator=(const FireElectric& fe) {
    Engimon::operator=(fe);
    return *this;
}