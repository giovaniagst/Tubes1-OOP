// WaterIce.cpp
#include "WaterIce.hpp"
#include <iostream>

using namespace std;

WaterIce::WaterIce(string name, string* parentname, string* parentspecies, Skill* skill, int numskill) :
Engimon(name, parentname, parentspecies, skill, {"Water", "Ice"} , numskill) {
    //
}

WaterIce::WaterIce(const WaterIce& wi) : Engimon(wi.getName(), wi.getParentName(), wi.getParentSpecies(), wi.getSkill(), {"Water", "Ice"}, wi.getNumSkill()) { 
    //
}

WaterIce::~WaterIce() {
    //
}

WaterIce& WaterIce::operator=(const WaterIce& wi) {
    Engimon::operator=(wi);
    return *this;
}