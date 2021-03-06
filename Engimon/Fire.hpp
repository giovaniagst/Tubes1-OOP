// Fire.hpp
#ifndef FIRE_HPP
#define FIRE_HPP

#include "Engimon.hpp"

// Engimon berelemen Fire
class Fire : public Engimon {
    public:
        Fire(string name, string species_name, string* parentname, string* parentspecies, int numskill, int X, int Y);
        Fire(const Fire&);
        ~Fire();
        Fire& operator=(const Fire&);
};

#endif
