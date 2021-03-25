// WaterIce.hpp
#ifndef WATERICE_HPP
#define WATERICE_HPP

#include "Engimon.hpp"

// Engimon berelemen Water dan Ice
class WaterIce : public Engimon {
    public:
        WaterIce(string name, string species_name, string* parentname, string* parentspecies, int numskill, int X, int Y);
        WaterIce(const WaterIce&);
        ~WaterIce();
        WaterIce& operator=(const WaterIce&);
};

#endif
