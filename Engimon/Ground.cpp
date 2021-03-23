// Ground.cpp
#include "Ground.hpp"
#include <iostream>

using namespace std;

Ground::Ground(string name, string* parentname, string* parentspecies, int numskill) :
Engimon(name, parentname, parentspecies, {"Ground", ""}, numskill) {
    //
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