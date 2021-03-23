// Electric.cpp
#include "Electric.hpp"
#include <iostream>

using namespace std;

Electric::Electric(string name, string* parentname, string* parentspecies, int numskill) :
Engimon(name, parentname, parentspecies, {"Electric", ""}, numskill) {
    //
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