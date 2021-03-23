// WaterGround.cpp
#include "WaterGround.hpp"
#include <iostream>

using namespace std;

WaterGround::WaterGround(string name, string* parentname, string* parentspecies, int numskill) :
Engimon(name, parentname, parentspecies, {"Water", "Ground"}, numskill) {
    //
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