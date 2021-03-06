// FireElectric.cpp
#include "FireElectric.hpp"
#include <iostream>

using namespace std;

FireElectric::FireElectric(string name, string species_name, string* parentname, string* parentspecies, int numskill, int X, int Y) :
Engimon(name, species_name, parentname, parentspecies, numskill, X, Y) {
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
