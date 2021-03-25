// Electric.hpp
#ifndef ELECTRIC_HPP
#define ELECTRIC_HPP

#include "Engimon.hpp"

// Engimon berelemen Electric
class Electric : public Engimon {
    public:
        Electric(string name, string species_name, string* parentname, string* parentspecies, int numskill);
        Electric(const Electric&);
        ~Electric();
        Electric& operator=(const Electric&);
};

#endif