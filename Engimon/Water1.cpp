// Water1.cpp
#include "Water1.hpp"
#include <iostream>
using namespace std;

//virtual ~Water1();
//Water1& operator=(const Water1&);

Water1::Water1(string name, string* parentname, string* parentspecies, Skill* skill, string* element
        int level, int experience, int cumulative_experience, int num_skill) :
        User(name, parentname, parentspecies, skill, element
        level, experience, cumulative_experience, num_skill) {
    //
}
