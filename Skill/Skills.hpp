#ifndef SKILLS_HPP
#define SKILLS_HPP

#include "Skill.hpp"
using namespace std;

// Skill bawaan spesies

class SkillCharizard : public Skill {
    public:
        SkillCharizard() : Skill(10) {
            elementSkill[0] = "Fire";
            for (int i = 1; i < 5; i++) {
                elementSkill[i] = "";
            }
            bawaan = true;
        }
};

class SkillGlaceon : public Skill {
    public:
        SkillGlaceon() : Skill(10) {
            elementSkill[0] = "Ice";
            for (int i = 1; i < 5; i++) {
                elementSkill[i] = "";
            }
            bawaan = true;
        }
};

class SkillOnix : public Skill {
    public:
        SkillOnix() : Skill(10) {
            elementSkill[0] = "Ground";
            for (int i = 1; i < 5; i++) {
                elementSkill[i] = "";
            }
            bawaan = true;
        }
};

class SkillPikachu : public Skill {
    public:
        SkillPikachu() : Skill(10) {
            elementSkill[0] = "Electric";
            for (int i = 1; i < 5; i++) {
                elementSkill[i] = "";
            }
            bawaan = true;
        }
};

class SkillSquirtle : public Skill {
    public:
        SkillSquirtle() : Skill(10) {
            elementSkill[0] = "Water";
            for (int i = 1; i < 5; i++) {
                elementSkill[i] = "";
            }
            bawaan = true;
        }
};

class SkillRotom : public Skill {
    public:
        SkillRotom() : Skill(10) {
            elementSkill[0] = "Fire";
            elementSkill[1] = "Electric";
            for (int i = 2; i < 5; i++) {
                elementSkill[i] = "";
            }
            bawaan = true;
        }
};

class SkillWooper : public Skill {
    public:
        SkillWooper() : Skill(10) {
            elementSkill[0] = "Water";
            elementSkill[1] = "Ground";
            for (int i = 2; i < 5; i++) {
                elementSkill[i] = "";
            }
            bawaan = true;
        }
};

class SkillCloyster : public Skill {
    public:
        SkillCloyster() : Skill(10) {
            elementSkill[0] = "Water";
            elementSkill[1] = "Ice";
            for (int i = 2; i < 5; i++) {
                elementSkill[i] = "";
            }
            bawaan = true;
        }
};

// Skill elemen

class SkillFire : public Skill {
    public:
        SkillFire() : Skill(10) {
            elementSkill[0] = "Fire";
            for (int i = 1; i < 5; i++) {
                elementSkill[i] = "";
            }
        }
};

class SkillWater : public Skill {
    public:
        SkillWater() : Skill(10) {
            elementSkill[0] = "Water";
            for (int i = 1; i < 5; i++) {
                elementSkill[i] = "";
            }
        }
};

class SkillGround : public Skill {
    public:
        SkillGround() : Skill(10) {
            elementSkill[0] = "Ground";
            for (int i = 1; i < 5; i++) {
                elementSkill[i] = "";
            }
        }
};

class SkillElectric : public Skill {
    public:
        SkillElectric() : Skill(10) {
            elementSkill[0] = "Electric";
            for (int i = 1; i < 5; i++) {
                elementSkill[i] = "";
            }
        }
};

class SkillIce : public Skill {
    public:
        SkillIce() : Skill(10) {
            elementSkill[0] = "Ice";
            for (int i = 1; i < 5; i++) {
                elementSkill[i] = "";
            }
        }
};

// Mix

class Nyetrum : public Skill {
    public:
        Nyetrum() : Skill(10) {
            elementSkill[0] = "Water";
            elementSkill[1] = "Electric";
            for (int i = 2; i < 5; i++) {
                elementSkill[i] = "";
            }
        }
};

class Ngoding : public Skill {
    public:
        Ngoding() : Skill(10) {
            elementSkill[0] = "Electric";
            elementSkill[1] = "Fire";
            elementSkill[2] = "Ice";
            for (int i = 3; i < 5; i++) {
                elementSkill[i] = "";
            }
        }
};

class Nyemprot : public Skill {
    public:
        Nyemprot() : Skill(10) {
            elementSkill[0] = "Ground";
            elementSkill[1] = "Ice";
            elementSkill[2] = "Water";
            for (int i = 3; i < 5; i++) {
                elementSkill[i] = "";
            }
        }
};

class Singing : public Skill {
    public:
        Singing() : Skill(10) {
            elementSkill[0] = "Ground";
            elementSkill[1] = "Fire";
            for (int i = 2; i < 5; i++) {
                elementSkill[i] = "";
            }
        }
};

class PublicSpeaking : public Skill {
    public:
        PublicSpeaking() : Skill(10) {
            elementSkill[0] = "Water";
            elementSkill[1] = "Ground";
            elementSkill[2] = "Electric";
            elementSkill[3] = "Fire";
            elementSkill[4] = "Ice";           
        }
};

#endif 
