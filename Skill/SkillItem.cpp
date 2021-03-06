// SkillItem.cpp
#include "SkillItem.hpp"
#include <iostream>
#include <string>

SkillItem::SkillItem() : Skill() {
    jumlah = 0;
}

SkillItem::SkillItem(int base, int jumlah, string skill_name) : Skill(base, skill_name) {
    this->jumlah = jumlah;
}

SkillItem::SkillItem(const SkillItem& si) : Skill(si.base_power, si.namaSkill) {
    this->jumlah = si.jumlah;
}
SkillItem SkillItem::operator=(const SkillItem& si) {
    Skill::operator=(si);
    this->jumlah = si.jumlah;
    return *this;
}

int SkillItem::getJumlah() {
    return jumlah;
}
void SkillItem::setJumlah(int jml) {
    jumlah = jml;
}

void SkillItem::addJumlah(int add) {
    jumlah += add;
}
void SkillItem::learn(Engimon e) {
    string* elmts = e.getElements();
    bool found = false;
    int i = 0;
    int jmlSkill = 0;
    Skill skill = Skill(this->getBasePower(), this->getNamaSkill());
    skill.setElements(this->elementSkill);
    while (!found || elmts[i] != "" || i < 5) { // untuk elemen skill baru
        for (int j = 0; j < 2; j++) { // untuk elemen engimon
            if (elmts[i] == elementSkill[j]) {
                if (e.getNumSkill() < e.getMaxNumOfSkill()) {
                    e.setSkill(skill, e.getNumSkill());
                    e.setNumSkill(e.getNumSkill()+1);
                    jumlah -= 1;
                    cout << "Skill ditambahkan" << endl;
                } else {
                    // Skill penuh
                    cout << "Slot skill sudah penuh. Apakah ingin replace skill? (y/n)" << endl;
                    string replace;
                    cin >> replace;
                    if (replace == "y") {
                        cout << "Pilih slot yang ingin diubah (1-4): ";
                        int slot;
                        cin >> slot;
                        if (slot < 5 && slot > 0) {
                            e.setSkill(skill, e.getNumSkill());
                            e.setNumSkill(e.getNumSkill()+1);
                            jumlah -= 1;
                            cout << "Skill ditambahkan" << endl;
                        } else {
                            cout << "Penambahan skill dibatalkan    " << endl;
                        }
                    } else { // replace == "n"
                        cout << "Penambahan skill dibatalkan" << endl;
                    }
                }
                found = true;
            }
        }
        i++;
    }
}