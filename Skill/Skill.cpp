#include "Skill.hpp"

Skill::Skill() {
    this->base_power = 0;
    this->mastery_level = 1;
    this->bawaan = false;
    this->elementSkill = new string[5]; // karena ada 5 elemen jadi kapasitas selalu 5
}
Skill::Skill(int bp) {
    base_power = bp;
    mastery_level = 1; // asumsi setiap buat skill baru mastery level mulai dari 1
    bawaan = false;
    elementSkill = new string[5];
}
Skill::Skill(const Skill& s) {
    base_power = s.base_power;
    mastery_level = s.mastery_level;
    bawaan = s.bawaan;
    elementSkill = new string[5];
    for (int i = 0; i < 5; i++) {
        elementSkill[i] = s.elementSkill[i];
    }
}
Skill& Skill::operator=(const Skill& s) {
    base_power = s.base_power;
    mastery_level = s.mastery_level;
    bawaan = s.bawaan;
    for (int i = 0; i < 5; i++) {
        elementSkill[i] = s.elementSkill[i];
    }
    return *this;
}
Skill::~Skill() {
    delete [] elementSkill;
}

int Skill::getBasePower() {
    return base_power;
}
void Skill::setBasePower(int bp) {
    base_power = bp;
}
int Skill::getMasteryLevel() {
    return mastery_level;
}
void Skill::setMasteryLevel(int ml) {
    mastery_level = ml;
}
string* Skill::getElements() {
    return elementSkill;
}
void Skill::setElements(string* elmts) {
    for (int i = 0; i < 5; i++) {
        elementSkill[i] = elmts[i];
    }
}

bool Skill::getBawaan() {
    return bawaan;
}
void Skill::setBawaan(bool bawaan) {
    this->bawaan = bawaan;
}

void Skill::addElement(string elmt) {
    int i = 0;
    while (i < 5) {
        if (elementSkill[i] == "") {
            elementSkill[i] = elmt;
            i = 5; // biar keluar dari loop
        }
        else {
            i++;
        }
    }
}


