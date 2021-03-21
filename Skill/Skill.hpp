#ifndef SKILL_HPP
#define SKILL_HPP

#include <iostream>
#include <string>
using namespace std;

class Skill {
    private:
        int base_power;
        int mastery_level;
        string* elements;

    public:
        Skill();
        Skill(int bp, string* elmts);
        Skill(const Skill& s);
        Skill& operator=(const Skill& s);
        virtual ~Skill();

        int getBasePower();
        void setBasePower(int bp);
        int getMasteryLevel();
        void setMasteryLevel(int ml);
        string* getElements();
        void setElements(string* elmts);
        void addElement(string elmt);     
};

#endif