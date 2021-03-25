#include "Engimon.hpp"

using namespace std;

int Engimon::max_num_of_skills = 4;
int Engimon::max_cum_experience = 10000;

Engimon::Engimon() {
    name = "noname";
    species_name = "noname";
    parent_name = new string[2];
    parent_species = new string[2];
    num_skill = 0;
    skills = new Skill[max_num_of_skills];
    elements = new string[2];
    level = 0;
    experience = 0;
    cumulative_experience = 0;
    x = 0;
    y = 0;
    active = false;
}

Engimon::Engimon(string name, string species_name, string* parentname, string* parentspecies, int num_skill, int X, int Y) {
    name = name;
    species_name = species_name;
    parent_name = new string[2]; // 2 dulu kalau mau bonus baru ditambah
    for (int i = 0; i < 2; i++) {
        parent_name[i] = parentname[i];
    }
    parent_species = new string[2];
    for (int i = 0; i < 2; i++) {
        parent_species[i] = parentspecies[i];
    }
    num_skill = num_skill;
    skills = new Skill[max_num_of_skills];
    elements = new string[2];
    level = 0;
    experience = 0;
    cumulative_experience = 0;
    x = X;
    y = Y;
    active = false;
}

Engimon::Engimon(const Engimon& e) {
    name = e.name;
    species_name = e.species_name;
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
    x = e.x;
    y = e.y;
    active = e.active;
}

Engimon::~Engimon() {
    delete[] parent_name;
    delete[] parent_species;
    delete[] skills;
    delete[] elements;
}

Engimon& Engimon::operator=(const Engimon& e) {
    name = e.name;
    species_name = e.species_name;
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

    return *this;
}

// getter & setter
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
string* Engimon::getParentSpecies() {
    string* parentSpecies = new string[2];
    for (int i = 0; i < 2; i++) {
        parentSpecies[i] = this->parent_species[i];
    }
    return parentSpecies;
}
void Engimon::setParentSpecies(string species1, string species2) {
    parent_species[0] = species1;
    parent_species[1] = species2;
}

Skill Engimon::getSkill(int idx) {
    return skills[idx];
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
int Engimon::getX() {
    return x;
}
int Engimon::getY() {
    return y;
}
void Engimon::setCoordinate(int x, int y) {
    this->x = x;
    this->y = y;
}
bool Engimon::getActive() {
    return active;
}
void Engimon::setActive(bool active) {
    this->active = active;
}

string Engimon::getSpecies() {
    return species_name;
}

void Engimon::setSpecies(string s) {
    this->species_name = s;
}

int Engimon::getMaxNumOfSkill() {
    return 4;
}

// other methods
void Engimon::levelUp() {
    if (active) {
        if (experience % 10 >= 1) {
            level += 1;
            experience -= (experience % 10) * 10;
        }
    }
}

void Engimon::printInfo() {
    cout << "Nama Engimon : " << name << endl;
    cout << "Parent Name : " << parent_name[0] << ", " << parent_name[1] << endl;
    cout << "Parent Species : " << parent_species[0] << ", " << parent_species[1] << endl;
    cout << "Skills:" << endl;
    // for (int i = 0; i < num_skill; i++) {
    //     cout << " " << i << ". " << skills[i] << endl; // nunggu class skill dulu ya huhu
    // }
    cout << "Element";
    // if (strcmp(elements[1], "") != 0) {
    if (elements[1]==""){
        cout << "s: " << elements[0] << ", " << elements[1] << endl;
    } else {
        cout << ": " << elements[0] << endl;
    }
    cout << "Level : " << level << endl;
    cout << "Experience : " << experience << endl;
    cout << "Cumulative Experience : " << cumulative_experience << endl;
}

void Engimon::interact() {
    cout << "class engimon utama" << endl;
}
