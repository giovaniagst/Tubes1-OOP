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
        string namaSkill;
        string* elementSkill;

    public:
        Skill();
        Skill(int bp, string nama);
        Skill(const Skill& s);
        Skill& operator=(const Skill& s);
        virtual ~Skill();

        int getBasePower();
        void setBasePower(int bp);
        int getMasteryLevel();
        void setMasteryLevel(int ml);
        string* getElementSkill();
        void setElements(string* elmts);
        bool getBawaan();
        void setBawaan(bool bawaan);
        void addElement(string elmt);
        string getNamaSkill();
        void setNamaSkill(string nama);
};

#endif