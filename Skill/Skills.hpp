#ifndef SKILLS_HPP
#define SKILLS_HPP

#include "Skill.hpp"
using namespace std;

// Skill bawaan spesies

class SkillCharizard : public Skill {
    public:
        SkillCharizard() : Skill(10) {
            for (int i = 0; i < 5; i++) {
                elements[i] = "";
            }
        }
};

class SkillGlaceon : public Skill {
    public:
        SkillGlaceon() : Skill(10) {
            for (int i = 0; i < 5; i++) {
                elements[i] = "";
            }
        }
};

class SkillOnix : public Skill {
    public:
        SkillOnix() : Skill(10) {
            for (int i = 0; i < 5; i++) {
                elements[i] = "";
            }
        }
};

class SkillPikachu : public Skill {
    public:
        SkillPikachu() : Skill(10) {
            for (int i = 0; i < 5; i++) {
                elements[i] = "";
            }
        }
};

class SkillSquirtle : public Skill {
    public:
        SkillSquirtle() : Skill(10) {
            for (int i = 0; i < 5; i++) {
                elements[i] = "";
            }
        }
};

class SkillRotom : public Skill {
    public:
        SkillRotom() : Skill(10) {
            for (int i = 0; i < 5; i++) {
                elements[i] = "";
            }
        }
};

class SkillWooper : public Skill {
    public:
        SkillWooper() : Skill(10) {
            for (int i = 0; i < 5; i++) {
                elements[i] = "";
            }
        }
};

class SkillCloyster : public Skill {
    public:
        SkillCloyster() : Skill(10) {
            for (int i = 0; i < 5; i++) {
                elements[i] = "";
            }
        }
};

// Skill elemen

class SkillFire : public Skill {
    public:
        SkillFire() : Skill(10) {
            elements[0] = "Fire";
            for (int i = 1; i < 5; i++) {
                elements[i] = "";
            }
        }
};

class SkillWater : public Skill {
    public:
        SkillWater() : Skill(10) {
            elements[0] = "Water";
            for (int i = 1; i < 5; i++) {
                elements[i] = "";
            }
        }
};

class SkillGround : public Skill {
    public:
        SkillGround() : Skill(10) {
            elements[0] = "Ground";
            for (int i = 1; i < 5; i++) {
                elements[i] = "";
            }
        }
};

class SkillElectric : public Skill {
    public:
        SkillElectric() : Skill(10) {
            elements[0] = "Electric";
            for (int i = 1; i < 5; i++) {
                elements[i] = "";
            }
        }
};

class SkillIce : public Skill {
    public:
        SkillIce() : Skill(10) {
            elements[0] = "Ice";
            for (int i = 1; i < 5; i++) {
                elements[i] = "";
            }
        }
};

// Mix

class Nyetrum : public Skill {
    public:
        Nyetrum() : Skill(10) {
            elements[0] = "Water";
            elements[1] = "Electric";
            for (int i = 2; i < 5; i++) {
                elements[i] = "";
            }
        }
};

class Ngoding : public Skill {
    public:
        Ngoding() : Skill(10) {
            elements[0] = "Electric";
            elements[1] = "Fire";
            elements[2] = "Ice";
            for (int i = 3; i < 5; i++) {
                elements[i] = "";
            }
        }
};

class Nyemprot : public Skill {
    public:
        Nyemprot() : Skill(10) {
            elements[0] = "Ground";
            elements[1] = "Ice";
            elements[2] = "Water";
            for (int i = 3; i < 5; i++) {
                elements[i] = "";
            }
        }
};

class Singing : public Skill {
    public:
        Singing() : Skill(10) {
            elements[0] = "Ground";
            elements[1] = "Fire";
            for (int i = 2; i < 5; i++) {
                elements[i] = "";
            }
        }
};

class PublicSpeaking : public Skill {
    public:
        PublicSpeaking() : Skill(10) {
            elements[0] = "Water";
            elements[1] = "Ground";
            elements[2] = "Electric";
            elements[3] = "Fire";
            elements[4] = "Ice";           
        }
};

#endif 
