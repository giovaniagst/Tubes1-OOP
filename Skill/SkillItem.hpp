#ifndef SKILLITEM_HPP
#define SKILLITEM_HPP

#include "Skill.hpp"
using namespace std;

class SkillItem : public Skill {
    private:
        int jumlah; // inventory

    public:
        SkillItem();
        SkillItem(int jumlah);
        SkillItem(const SkillItem& si);
        SkillItem operator=(const SkillItem& si);
        void Learn();

};

#endif