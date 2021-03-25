// WaterIce.cpp
#include "WaterIce.hpp"
#include <iostream>

using namespace std;

WaterIce::WaterIce(string name, string species_name, string* parentname, string* parentspecies, int numskill) :
Engimon(name, species_name, parentname, parentspecies, numskill) {
    elements[0] = "Water";
    elements[1] = "Ice";
}

WaterIce::WaterIce(const WaterIce& wi) : Engimon(wi) { 
    //
}

WaterIce::~WaterIce() {
    //
}

WaterIce& WaterIce::operator=(const WaterIce& wi) {
    Engimon::operator=(wi);
    return *this;
}