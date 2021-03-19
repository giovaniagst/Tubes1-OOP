// Water1.hpp
#ifndef WATER1_H
#define WATER1_H

#include "Engimon.hpp"

class Water1 : public Engimon { // Water1 adalah salah satu spesies Engimon berelemen Water
    public:
        Water1();
        Water1(string name, string* parentname, string* parentspecies, Skill* skill, string* element
        int level, int experience, int cumulative_experience, int num_skill);
        virtual ~Water1();
        Water1& operator=(const Water1&);
};

#endif