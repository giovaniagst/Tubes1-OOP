// Fire.cpp
#include "Fire.hpp"
#include <iostream>

using namespace std;

Fire::Fire(string name, string species_name, string* parentname, string* parentspecies, int numskill, int X, int Y) :
Engimon(name, species_name, parentname, parentspecies, numskill, X, Y) {
    elements[0] = "Fire";
    elements[1] = "";
}

Fire::Fire(const Fire& f) : Engimon(f) {
    //
}

Fire::~Fire() {
    //
}

Fire& Fire::operator=(const Fire& f) {
    Engimon::operator=(f);
    return *this;
}
