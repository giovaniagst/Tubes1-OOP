#include "Skill.hpp"

Skill::Skill() {
    this->base_power = 0;
    this->mastery_level = 1;
    this->elements = new string[5]; // karena ada 5 elemen jadi kapasitas selalu 5
}
Skill::Skill(int bp, string* elmts) {
    base_power = bp;
    mastery_level = 1; // asumsi setiap buat skill baru mastery level mulai dari 1
    elements = new string[5];
    for (int i = 0; i < 5; i++) {
        elements[i] = elmts[i];
    }
}
Skill::Skill(const Skill& s) {
    base_power = s.base_power;
    mastery_level = s.mastery_level;
    elements = new string[5];
    for (int i = 0; i < 5; i++) {
        elements[i] = s.elements[i];
    }
}
Skill& Skill::operator=(const Skill& s) {
    base_power = s.base_power;
    mastery_level = s.mastery_level;
    for (int i = 0; i < 5; i++) {
        elements[i] = s.elements[i];
    }
    return *this;
}
virtual Skill::~Skill() {
    delete [] elements;
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
    return elements;
}
void Skill::setElements(string* elmts) {
    for (int i = 0; i < 5; i++) {
        elements[i] = elmts[i];
    }
}
void Skill::addElement(string elmt) {
    i = 0;
    while (i < 5) {
        if (elements[i] == "") {
            elements[i] = elmt;
            i = 5; // biar keluar dari loop
        }
        else {
            i++;
        }
    }
}
int Skill::getJumlah() {
    return jumlah;
}
void Skill::setJumlah(int jml) {
    jumlah = jml;
}
void Skill::addJumlah(int add) {
    jumlah += add;
}

