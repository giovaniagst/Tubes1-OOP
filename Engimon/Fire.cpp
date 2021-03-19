// Fire.cpp
#include "Fire.hpp"
#include <iostream>
using namespace std;

Fire::Fire() : Engimon() {

}
Fire::Fire(string name, string* parentname, string* parentspecies, Skill* skill, string* element,
int level, int experience, int cumulative_experience, int num_skill) : Engimon (name, parentname, parentspecies, skill, element, 
level, experience, cumulative_experience, num_skill)

}
// virtual ~Fire();
// Fire& operator=(const Fire&);