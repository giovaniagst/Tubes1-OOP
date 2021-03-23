// WaterGround.hpp
#ifndef WATERGROUND_HPP
#define WATERGROUND_HPP

#include "Engimon.hpp"

// Engimon berelemen Water dan Ground
class WaterGround : public Engimon {
    public:
        WaterGround(string name, string* parentname, string* parentspecies, int numskill);
        WaterGround(const WaterGround&);
        ~WaterGround();
        WaterGround& operator=(const WaterGround&);
};

#endif 