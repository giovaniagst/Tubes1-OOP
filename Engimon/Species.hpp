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
#include "../Skill/Skills.hpp"
#include <iostream>
#include <string>

using namespace std;

class Charizard : public Fire, public SkillCharizard {
    public:
        Charizard(string name, string* parentname, string* parentspecies, int numskill);
        Charizard(const Charizard&);
        Charizard& operator=(const Charizard&);
        virtual void interact();
};

class Glaceon : public Ice, public SkillGlaceon {
    public:
        Glaceon(string name, string* parentname, string* parentspecies, int numskill);
        Glaceon(const Glaceon&);
        Glaceon& operator=(const Glaceon&);
        virtual void interact();
};

class Onix : public Ground, public SkillOnix {
    public:
        Onix(string name, string* parentname, string* parentspecies, int numskill);
        Onix(const Onix&);
        Onix& operator=(const Onix&);
        virtual void interact();
};

class Pikachu : public Electric, public SkillPikachu {
    public:
        Pikachu(string name, string* parentname, string* parentspecies, int numskill);
        Pikachu(const Pikachu&);
        Pikachu& operator=(const Pikachu&);
        virtual void interact();
};

class Squirtle : public Water, public SkillSquirtle {
    public:
        Squirtle(string name, string* parentname, string* parentspecies, int numskill);
        Squirtle(const Squirtle&);
        Squirtle& operator=(const Squirtle&);
        virtual void interact();
};

class Rotom : public FireElectric, public SkillRotom {
    public:
        Rotom(string name, string* parentname, string* parentspecies, int numskill);
        Rotom(const Rotom&);
        Rotom& operator=(const Rotom&);
        virtual void interact();
};

class Wooper : public WaterGround, public SkillWooper {
    public:
        Wooper(string name, string* parentname, string* parentspecies, int numskill);
        Wooper(const Wooper&);
        Wooper& operator=(const Wooper&);
        virtual void interact();
};

class Cloyster : public WaterIce, public SkillCloyster {
    public:
        Cloyster(string name, string* parentname, string* parentspecies, int numskill);
        Cloyster(const Cloyster&);
        Cloyster& operator=(const Cloyster&);
        virtual void interact();
};

#endif