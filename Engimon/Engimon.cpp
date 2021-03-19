#include "Engimon.hpp"
#include <iostream>
using namespace std;

int Engimon::max_num_of_skills = 4;

Engimon::Engimon() {
    name = "";
    parent_name = new string[2]; // 2 dulu kalau mau bonus baru ditambah
    parent_species = new string[2];
    skills = new Skill[max_num_of_skills];
    num_skill = 0;
    elements = new string[2];
    level = 0;
    experience = 0;
    cumulative_experience = 0;
}

Engimon::Engimon(string name, string* parentname, string* parentspecies, Skill* skill, string* element,
int level, int experience, int cumulative_experience, int num_skill) {
    name = name;
    parent_name = new string[2];
    for (int i = 0; i < 2; i++) {
        parent_name[i] = parentname[i];
    }
    parent_species = new string[2];
    for (int i = 0; i < 2; ++) {
        parent_species[i] = parentspecies[i];
    }
    num_skill = num_skill;
    skills = new Skill[max_num_of_skills];
    for (int i = 0; i < num_skill; i++) {
        skills[i] = skill[i];
    }
    elements = new string[2];
    for (int i = 0; i < 2; i++) {
        elements[i] = element[i];
    }
    level = level;
    experience = experience;
    cumulative_experience = cumulative_experience;
}

Engimon::Engimon(const Engimon& e) {
    name = e.name;
    parent_name = new string[2];
    for (int i = 0; i < 2; i++) {
		parent_name[i] = e.parent_name[i];
	}
    parent_species = new string[2];
    for (int i = 0; i < 2; i++) {
        parent_species[i] = e.parent_species[i];
    }
    num_skill = e.num_skill;
    skills = new Skill[max_num_of_skills];
    for (int i = 0; i < num_skill; i++) {
        skills[i] = e.skills[i];
    }
    elements = new string[2];
    for (int i = 0; i < 2; i++) {
        elements[i] = e.elements[i];
    }
    level = e.level;
    experience = e.experience;
    cumulative_experience = e.cumulative_experience;
}

Engimon::~Engimon() {
    delete[] parent_name;
    delete[] parent_species;
    delete[] skills;
    delete[] elements;
}

Engimon& Engimon::operator=(const Engimon& e) {
    name = e.name;
    for (int i = 0; i < 2; i++) {
        parent_name[i] = e.parent_name[i];
    }
    for (int i = 0; i < 2; i++) {
        parent_species[i] = e.parent_species[i];
    }
    num_skill = e.num_skill;
    for (int i = 0; i < num_skill; i++) {
        skills[i] = e.skills[i];
    }
    for (int i = 0; i < 2; i++) {
        elements[i] = e.elements[i];
    }
    level = e.level;
    experience = e.experience;
    cumulative_experience = e.cumulative_experience;
    return *this; //harusnya :'v
}

// getter & setter
// static int get_max_passenger() { return 4 }
string Engimon::getName() {
    return name;
}
void Engimon::setName(string name) {
    this->name = name;
} 
string* Engimon::getParentName() {
    string* parentName = new string[2];
    for (int i = 0; i < 2; i++) {
        parentName[i] = this->parent_name[i];
    }
    return parentName;
}
void Engimon::setParentName(string parent1, string parent2) {
    parent_name[0] = parent1;
    parent_name[1] = parent2;
}
Skill* Engimon::getSkill() {
    Skill* skill = new Skill[max_num_of_skills];
    for (int i = 0; i < num_skill; i++) {
        skill[i] = skills[i];
    }
    return skill;

}
void Engimon::setSkill(Skill skill, int idx) {
    skills[idx] = skill;
}
string* Engimon::getElements() {
    string* hasil = new string[2];
    for (int i = 0; i < 1; i++) {
        hasil[i] = elements[i];
    }
    return hasil;
}
void Engimon::setElements(string element, int i) {
    elements[i] = element;
}
int Engimon::getLevel() {
    return level;
}
void Engimon::setLevel(int level) {
    level = level;
}
int Engimon::getExperience() {
    return experience;
}
void Engimon::setExperience(int experience) {
    experience = experience;
}
int Engimon::getCumulativeExperience() {
    return cumulative_experience;
}
void Engimon::setCumulativeExperience(int cumulative_experience) {
    cumulative_experience = cumulative_experience;
}
int Engimon::getNumSkill() {
    return num_skill;
}
void Engimon::setNumSkill(int num) {
    num_skill = num;
}