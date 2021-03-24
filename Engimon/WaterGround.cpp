// WaterGround.cpp
#include "WaterGround.hpp"
#include <iostream>

using namespace std;

WaterGround::WaterGround(string name, string* parentname, string* parentspecies, int numskill) :
Engimon(name, parentname, parentspecies, numskill) {
    elements[0] = "Water";
    elements[1] = "Ground";
}

WaterGround::WaterGround(const WaterGround& wg) : Engimon(wg) { 
    //
}

WaterGround::~WaterGround() {
    //
}

WaterGround& WaterGround::operator=(const WaterGround& wg) {
    Engimon::operator=(wg);
    return *this;
}