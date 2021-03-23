// WaterIce.hpp
#ifndef WATERICE_HPP
#define WATERICE_HPP

#include "Engimon.hpp"

// Engimon berelemen Water dan Ice
class WaterIce : public Engimon {
    public:
        WaterIce(string name, string* parentname, string* parentspecies, int numskill);
        WaterIce(const WaterIce&);
        ~WaterIce();
        WaterIce& operator=(const WaterIce&);
};

#endif