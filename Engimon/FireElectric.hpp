// FireElectric.hpp
#ifndef FIREELECTRIC_HPP
#define FIREELECTRIC_HPP

#include "Engimon.hpp"

// Engimon berelemen Fire dan Electric
class FireElectric : public Engimon {
    public :
        FireElectric(string name, string* parentname, string* parentspecies, Skill* skill, int numskill);
        FireElectric(const FireElectric&);
        ~FireElectric();
        FireElectric& operator=(const FireElectric&);
};

#endif 