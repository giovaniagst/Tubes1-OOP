// Ice.cpp
#include "Ice.hpp"
#include <iostream>

using namespace std;

Ice::Ice(string name, string* parentname, string* parentspecies, int numskill) :
Engimon(name, parentname, parentspecies, numskill) {
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