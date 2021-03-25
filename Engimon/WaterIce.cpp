// WaterIce.cpp
#include "WaterIce.hpp"
#include <iostream>

using namespace std;

WaterIce::WaterIce(string name, string species_name, string* parentname, string* parentspecies, int numskill, int X, int Y) :
Engimon(name, species_name, parentname, parentspecies, numskill, X, Y) {
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
