#include "Engimon.hpp"

using namespace std;

int Engimon::max_num_of_skills = 4;
int Engimon::max_cum_experience = 10000;

Engimon::Engimon() {
    this->name = "noname";
    this->species_name = "noname";
    this->parent_name = new string[2];
    this->parent_species = new string[2];
    this->num_skill = 0;
    this->skills = new Skill[max_num_of_skills];
    this->elements = new string[2];
    this->level = 0;
    this->experience = 0;
    this->cumulative_experience = 0;
    this->x = 0;
    this->y = 0;
    this->active = false;
}

Engimon::Engimon(string name, string species_name, string* parentname, string* parentspecies, int num_skill, int X, int Y) {
    this->name = name;
    this->species_name = species_name;
    this->parent_name = new string[2]; // 2 dulu kalau mau bonus baru ditambah
    for (int i = 0; i < 2; i++) {
        this->parent_name[i] = parentname[i];
    }
    this->parent_species = new string[2];
    for (int i = 0; i < 2; i++) {
        this->parent_species[i] = parentspecies[i];
    }
    this->num_skill = num_skill;
    this->skills = new Skill[max_num_of_skills];
    this->elements = new string[2];
    this->level = 0;
    this->experience = 0;
    this->cumulative_experience = 0;
    this->x = X;
    this->y = Y;
    this->active = false;
}

Engimon::Engimon(const Engimon& e) {
    this->name = e.name;
    this->species_name = e.species_name;
    this->parent_name = new string[2];
    for (int i = 0; i < 2; i++) {
		this->parent_name[i] = e.parent_name[i];
	}
    this->parent_species = new string[2];
    for (int i = 0; i < 2; i++) {
        this->parent_species[i] = e.parent_species[i];
    }
    this->num_skill = e.num_skill;
    this->skills = new Skill[max_num_of_skills];
    for (int i = 0; i < num_skill; i++) {
        this->skills[i] = e.skills[i];
    }
    this->elements = new string[2];
    for (int i = 0; i < 2; i++) {
        this->elements[i] = e.elements[i];
    }
    this->level = e.level;
    this->experience = e.experience;
    this->cumulative_experience = e.cumulative_experience;
    this->x = e.x;
    this->y = e.y;
    this->active = e.active;
}

Engimon::~Engimon() {
    delete[] parent_name;
    delete[] parent_species;
    delete[] skills;
    delete[] elements;
}

Engimon& Engimon::operator=(const Engimon& e) {
    this->name = e.name;
    this->species_name = e.species_name;
    for (int i = 0; i < 2; i++) {
        this->parent_name[i] = e.parent_name[i];
    }
    for (int i = 0; i < 2; i++) {
        this->parent_species[i] = e.parent_species[i];
    }
    this->num_skill = e.num_skill;
    for (int i = 0; i < num_skill; i++) {
        this->skills[i] = e.skills[i];
    }
    for (int i = 0; i < 2; i++) {
        this->elements[i] = e.elements[i];
    }
    this->level = e.level;
    this->experience = e.experience;
    this->cumulative_experience = e.cumulative_experience;

    return *this;
}

// getter & setter
string Engimon::getName() {
    return this->name;
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
    this->parent_name[0] = parent1;
    this->parent_name[1] = parent2;
}
string* Engimon::getParentSpecies() {
    string* parentSpecies = new string[2];
    for (int i = 0; i < 2; i++) {
        parentSpecies[i] = this->parent_species[i];
    }
    return parentSpecies;
}
void Engimon::setParentSpecies(string species1, string species2) {
    this->parent_species[0] = species1;
    this->parent_species[1] = species2;
}

Skill Engimon::getSkill(int idx) {
    return this->skills[idx];
}

void Engimon::setSkill(Skill skill, int idx) {
    this->skills[idx] = skill;
}
string* Engimon::getElements() {
    string* hasil = new string[2];
    for (int i = 0; i < 2; i++) {
        hasil[i] = this->elements[i];
    }
    return hasil;
}
void Engimon::setElements(string element, int i) {
    this->elements[i] = element;
}
int Engimon::getLevel() {
    return this->level;
}
void Engimon::setLevel(int level) {
    this->level = level;
}
int Engimon::getExperience() {
    return this->experience;
}
void Engimon::setExperience(int experience) {
    this->experience = experience;
}
int Engimon::getCumulativeExperience() {
    return this->cumulative_experience;
}
void Engimon::setCumulativeExperience(int cumulative_experience) {
    this->cumulative_experience = cumulative_experience;
}
int Engimon::getNumSkill() {
    return this->num_skill;
}
void Engimon::setNumSkill(int num) {
    this->num_skill = num;
}
int Engimon::getX() {
    return this->x;
}
int Engimon::getY() {
    return this->y;
}
void Engimon::setX(int X){
    this->x = X;
}
void Engimon::setY(int Y){
    this->y = Y;
}
bool Engimon::getActive() {
    return this->active;
}
void Engimon::setActive(bool active) {
    this->active = active;
}

string Engimon::getSpecies() {
    return this->species_name;
}

void Engimon::setSpecies(string s) {
    this->species_name = s;
}

int Engimon::getMaxNumOfSkill() {
    return 4;
}

// other methods
void Engimon::levelUp() {
    if (this->active) {
        if (this->experience % 10 >= 1) {
            this->level += 1;
            this->experience -= (this->experience % 10) * 10;
        }
    }
}

void Engimon::printInfo() {
    cout << "Nama Engimon : " << name << endl;
    cout << "Parent Name : " << parent_name[0] << ", " << parent_name[1] << endl;
    cout << "Parent Species : " << parent_species[0] << ", " << parent_species[1] << endl;
    cout << "Skills:" << endl;
    for (int i = 0; i < num_skill; i++) {
        cout << " " << i+1 << ". " << skills[i].getNamaSkill() << endl; // nunggu class skill dulu ya huhu
    }
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

bool Engimon::operator==(const Engimon& e) {
    return(
        (this->name == e.name )&&
        (this->species_name == e.species_name)&&
        (this->parent_name[0] == e.parent_name[0])&& 
        (this->parent_name[1] == e.parent_name[1])&& 
        (this->parent_species[0] == e.parent_species[0]) &&
        (this->parent_species[1] == e.parent_species[1]) &&
        (this->num_skill == e.num_skill) &&
        (this->elements[0] == e.elements[0]) &&
        (this->elements[1] == e.elements[1]) &&
        (this->level == e.level) &&
        (this->experience == e.experience) &&
        (this->cumulative_experience == e.cumulative_experience)
    );
}
