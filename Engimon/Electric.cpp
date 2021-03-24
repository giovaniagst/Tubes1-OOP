// Electric.cpp
#include "Electric.hpp"
#include <iostream>

using namespace std;

Electric::Electric(string name, string* parentname, string* parentspecies, int numskill) :
Engimon(name, parentname, parentspecies, numskill) {
    elements[0] = "Electric";
    elements[1] = "";
}
    
Electric::Electric(const Electric& e) : Engimon(e) {
    //
}

Electric::~Electric() {
    //
}

Electric& Electric::operator=(const Electric& e) {
    Engimon::operator=(e);
    return *this;
}