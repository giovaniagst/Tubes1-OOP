#ifndef SKILLS_HPP
#define SKILLS_HPP

#include "Skill.hpp"
using namespace std;

// Skill bawaan spesies

class SkillCharizard : public Skill {
    public:
        SkillCharizard() : Skill(10, {"", "", "", "", ""});
};

class SkillGlaceon : public Skill {
    public:
        SkillGlaceon() : Skill(10, {"", "", "", "", ""});
};

class SkillOnix : public Skill {
    public:
        SkillOnix() : Skill(10, {"", "", "", "", ""});
};

class SkillPikachu : public Skill {
    public:
        SkillPikachu() : Skill(10, {"", "", "", "", ""});
};

class SkillSquirtle : public Skill {
    public:
        SkillSquirtle() : Skill(10, {"", "", "", "", ""});
};

class SkillRotom : public Skill {
    public:
        SkillRotom() : Skill(10, {"", "", "", "", ""});
};

class SkillWooper : public Skill {
    public:
        SkillWooper() : Skill(10, {"", "", "", "", ""});
};

class SkillCloyster : public Skill {
    public:
        SkillCloyster() : Skill(10, {"", "", "", "", ""});
};

// Skill elemen

class SkillFire : public Skill {
    public:
        SkillFire() : Skill(10, {"Fire", "", "", "", ""});
};

class SkillWater : public Skill {
    public:
        SkillWater() : Skill(10, {"Water", "", "", "", ""});
};

class SkillGround : public Skill {
    public:
        SkillGround() : Skill(10, {"Ground", "", "", "", ""});
};

class SkillElectric : public Skill {
    public:
        SkillElectric() : Skill(10, {"Electric", "", "", "", ""});
};

class SkillIce : public Skill {
    public:
        SkillIce() : Skill(10, {"Ice", "", "", "", ""});
};

// Mix

class Nyetrum : public Skill {
    public:
        Nyetrum() : Skill(10, {"Water", "Electric", "", "", ""});
};

class Ngoding : public Skill {
    public:
        Ngoding() : Skill(10, {"Electric", "Fire", "Ice", "", ""});
};

class Nyemprot : public Skill {
    public:
        Nyemprot() : Skill(10, {"Ground", "Ice", "Water", "", ""});
};

class Singing : public Skill {
    public:
        Singing() : Skill(10, {"Ground", "Fire", "", "", ""});
};

class PublicSpeaking : public Skill {
    public:
        PublicSpeaking() : Skill(10, {"Water", "Ground", "Electric", "Fire", "Ice"});
};

#endif 
