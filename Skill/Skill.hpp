#ifndef SKILL_HPP
#define SKILL_HPP

#include <iostream>
#include <string>

using namespace std;

class Skill {
    protected:
        int base_power; 
        int mastery_level;
        bool bawaan;
        string* elementSkill;

    public:
        Skill();
        Skill(int bp);
        Skill(const Skill& s);
        Skill& operator=(const Skill& s);
        virtual ~Skill();

        int getBasePower();
        void setBasePower(int bp);
        int getMasteryLevel();
        void setMasteryLevel(int ml);
        string* getElements();
        void setElements(string* elmts);
        bool getBawaan();
        void setBawaan(bool bawaan);
        void addElement(string elmt);
};

#endif