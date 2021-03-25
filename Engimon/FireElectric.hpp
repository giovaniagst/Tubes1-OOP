// FireElectric.hpp
#ifndef FIREELECTRIC_HPP
#define FIREELECTRIC_HPP

#include "Engimon.hpp"

// Engimon berelemen Fire dan Electric
class FireElectric : public Engimon {
    public :
        FireElectric(string name, string species_name, string* parentname, string* parentspecies, int numskill);
        FireElectric(const FireElectric&);
        ~FireElectric();
        FireElectric& operator=(const FireElectric&);
};

#endif 