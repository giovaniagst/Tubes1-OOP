// Ground.cpp
#include "Ground.hpp"
#include <iostream>

using namespace std;

Ground::Ground(string name, string species_name, string* parentname, string* parentspecies, int numskill) :
Engimon(name, species_name, parentname, parentspecies, numskill) {
    elements[0] = "Ground";
    elements[1] = "";
}

Ground::Ground(const Ground& g) : Engimon(g) { 
    //
}

Ground::~Ground() {
    //
}

Ground& Ground::operator=(const Ground& g) {
    Engimon::operator=(g);
    return *this;
}