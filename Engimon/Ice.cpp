// Ice.cpp
#include "Ice.hpp"
#include <iostream>

using namespace std;

Ice::Ice(string name, string species_name, string* parentname, string* parentspecies, int numskill, int X, int Y) :
Engimon(name, species_name, parentname, parentspecies, numskill, X, Y) {
    elements[0] = "Ice";
    elements[1] = "";
}

Ice::Ice(const Ice& i) : Engimon(i) {
    //
}

Ice::~Ice() {
    //
}

Ice& Ice::operator=(const Ice& i) {
    Engimon::operator=(i);
    return *this;
}
