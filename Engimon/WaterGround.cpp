// WaterGround.cpp
#include "WaterGround.hpp"
#include <iostream>

using namespace std;

WaterGround::WaterGround(string name, string* parentname, string* parentspecies, Skill* skill, int numskill) :
Engimon(name, parentname, parentspecies, skill, {"Water", "Ground"} , numskill) {
    //
}

WaterGround::WaterGround(const WaterGround& wg) : Engimon(wg.getName(), wg.getParentName(), wg.getParentSpecies(), wg.getSkill(), {"Water", "Ground"}, wg.getNumSkill()) { 
    //
}

WaterGround::~WaterGround() {
    //
}

WaterGround& WaterGround::operator=(const WaterGround& wg) {
    Engimon::operator=(wg);
    return *this;
}