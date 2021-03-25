// Water.cpp
#include "Water.hpp"
#include <iostream>

using namespace std;

Water::Water(string name, string species_name, string* parentname, string* parentspecies, int numskill, int X, int Y) :
Engimon(name, species_name, parentname, parentspecies, numskill, X, Y) {
    elements[0] = "Water";
    elements[1] = "";
}

Water::Water(const Water& w) : Engimon(w) {
    //
}

Water::~Water() {
    //
}

Water& Water::operator=(const Water& w) {
    Engimon::operator=(w);
    return *this;
}
