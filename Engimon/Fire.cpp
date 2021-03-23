// Fire.cpp
#include "Fire.hpp"
#include <iostream>

using namespace std;

Fire::Fire(string name, string* parentname, string* parentspecies, int numskill) :
Engimon(name, parentname, parentspecies, {"Fire", ""} , numskill) {
    //
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
