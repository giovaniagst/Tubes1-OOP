// Fire.hpp
#ifndef FIRE_HPP
#define FIRE_HPP

#include "Engimon.hpp"

// Engimon berelemen Fire
class Fire : public Engimon {
    public:
        Fire(string name, string* parentname, string* parentspecies, int numskill);
        Fire(const Fire&);
        ~Fire();
        Fire& operator=(const Fire&);
};

#endif 