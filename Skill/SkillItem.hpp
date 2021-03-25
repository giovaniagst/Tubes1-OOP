#ifndef SKILLITEM_HPP
#define SKILLITEM_HPP

#include "../Engimon/Engimon.hpp"
using namespace std;

class SkillItem : public Skill {
    private:
        int jumlah; // inventory

    public:
        SkillItem();
        SkillItem(int base, int jumlah, string skill_name);
        SkillItem(const SkillItem& si);
        SkillItem operator=(const SkillItem& si);

        int getJumlah();
        void setJumlah(int jml);
        
        void addJumlah(int add);
        void learn(Engimon e);
};

#endif