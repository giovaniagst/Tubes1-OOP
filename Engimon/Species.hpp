// Species.hpp
#ifndef SPECIES_HPP
#define SPECIES_HPP

#include "Fire.hpp"
#include "Electric.hpp"
#include "FireElectric.hpp"
#include "Ground.hpp"
#include "Ice.hpp"
#include "Water.hpp"
#include "WaterGround.hpp"
#include "WaterIce.hpp"
#include <iostream>
#include <string>

using namespace std;

class Charizard : public Fire {
    public:
        Charizard(string name, string* parentname, string* parentspecies, Skill* skill, int numskill);
        Charizard(const Charizard&);
        Charizard& operator=(const Charizard&);
        virtual void interact();
};

class Glaceon : public Ice {
    public:
        Glaceon(string name, string* parentname, string* parentspecies, Skill* skill, int numskill);
        Glaceon(const Glaceon&);
        Glaceon& operator=(const Glaceon&);
        virtual void interact();
};

class Onix : public Ground {
    public:
        Onix(string name, string* parentname, string* parentspecies, Skill* skill, int numskill);
        Onix(const Onix&);
        Onix& operator=(const Onix&);
        virtual void interact();
};

class Pikachu : public Electric {
    public:
        Pikachu(string name, string* parentname, string* parentspecies, Skill* skill, int numskill);
        Pikachu(const Pikachu&);
        Pikachu& operator=(const Pikachu&);
        virtual void interact();
};

class Squirtle : public Water {
    public:
        Squirtle(string name, string* parentname, string* parentspecies, Skill* skill, int numskill);
        Squirtle(const Squirtle&);
        Squirtle& operator=(const Squirtle&);
        virtual void interact();
};

class Rotom : public FireElectric {
    public:
        Rotom(string name, string* parentname, string* parentspecies, Skill* skill, int numskill);
        Rotom(const Rotom&);
        Rotom& operator=(const Rotom&);
        virtual void interact();
};

class Wooper : public WaterGround {
    public:
        Wooper(string name, string* parentname, string* parentspecies, Skill* skill, int numskill);
        Wooper(const Wooper&);
        Wooper& operator=(const Wooper&);
        virtual void interact();
};

class Cloyster : public WaterIce {
    public:
        Cloyster(string name, string* parentname, string* parentspecies, Skill* skill, int numskill);
        Cloyster(const Cloyster&);
        Cloyster& operator=(const Cloyster&);
        virtual void interact();
};

#endif