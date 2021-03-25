// Ground.hpp
#ifndef GROUND_HPP
#define GROUND_HPP

#include "Engimon.hpp"

// Engimon berelemen Ground
class Ground : public Engimon {
    public:
        Ground(string name, string species_name, string* parentname, string* parentspecies, int numskill);
        Ground(const Ground&);
        ~Ground();
        Ground& operator=(const Ground&);
};

#endif