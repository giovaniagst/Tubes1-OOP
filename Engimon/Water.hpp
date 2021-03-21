// Water.hpp
#ifndef WATER_HPP
#define WATER_HPP

#include "Engimon.hpp"

// Engimon berelemen Water
class Water : public Engimon {
    public:
        Water(string name, string* parentname, string* parentspecies, Skill* skill, int numskill);
        Water(const Water&);
        ~Water();
        Water& operator=(const Water&);
};

#endif