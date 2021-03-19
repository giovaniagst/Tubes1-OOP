// Fire.hpp

#ifndef FIRE_HPP
#define FIRE_HPP
#include <string>
#include "Engimon.hpp"
using namespace std;

class Fire : public Engimon {
    public :
        Fire();
        Fire(string name, string* parentname, string* parentspecies, Skill* skill, string* element,
        int level, int experience, int cumulative_experience, int num_skill);
        virtual ~Fire();
        Fire& operator=(const Fire&);
        
};
#endif 