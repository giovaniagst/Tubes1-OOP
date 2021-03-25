// Ice.hpp
#ifndef ICE_H
#define ICE_H

#include "Engimon.hpp"

// Engimon berelemen Ice
class Ice : public Engimon {
    public:
        Ice(string name, string species_name, string* parentname, string* parentspecies, int numskill);
        Ice(const Ice&);
        ~Ice();
        Ice& operator=(const Ice&);
};

#endif