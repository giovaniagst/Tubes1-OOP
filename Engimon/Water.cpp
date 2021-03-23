// Water.cpp
#include "Water.hpp"
#include <iostream>

using namespace std;

Water::Water(string name, string* parentname, string* parentspecies, int numskill) :
Engimon(name, parentname, parentspecies, {"Water", ""}, numskill) {
    //
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